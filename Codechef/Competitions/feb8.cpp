#include <bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;
const int max1 = 100005;
int n, m, a[max1];
vector<int> Q;

struct node {
	int lft;
	int lft_max;
	int rgt;
	int rgt_max;
	int major;
	int major_max;
	bool leaf = false;
} seg[4*max1];



void seg_build(int l, int r, int k) {
	if(l == r) {
		seg[k].lft=a[l];
		seg[k].lft_max=1;
		seg[k].rgt=a[l];
		seg[k].rgt_max=1;
    seg[k].major = a[l];
		seg[k].major_max = 1;
		seg[k].leaf = true;
		return;
	}

	int mid = (l+r)/2;
	seg_build(l, mid, 2*k);
	seg_build(mid+1, r, 2*k+1);

	int temp;
	if(seg[2*k].rgt == seg[2*k+1].lft){
	temp = seg[2*k].rgt_max + seg[2*k+1].lft_max;
	int temp_max = max(temp,max(seg[2*k].major_max,seg[2*k+1].major_max));
	seg[k].major_max = temp_max;
	if(temp_max == temp)
	seg[k].major = seg[2*k].rgt;
	else
	if(temp_max == seg[2*k].major_max)
	seg[k].major = seg[2*k].major;
	else
	seg[k].major = seg[2*k+1].major;

  if(seg[2*k].leaf == true || seg[2*k+1].leaf == true){

	if(seg[2*k].leaf && seg[2*k+1].leaf)
	{
		seg[k].rgt = seg[2*k+1].rgt;
		seg[k].lft = seg[2*k].lft;
		if(seg[k].rgt == seg[k].lft){
		seg[k].rgt_max = seg[k].lft_max = seg[2*k].major_max + seg[2*k+1].major_max;
		seg[k].leaf = true;
		}
		else{
		seg[k].rgt_max = seg[2*k+1].major_max;
		seg[k].lft_max = seg[2*k].major_max;
		}

	}
	else
	if(seg[2*k+1].leaf)
	{
		seg[k].rgt = seg[2*k+1].rgt;
		seg[k].lft = seg[2*k].lft;
		seg[k].lft_max = seg[2*k].lft_max;
		seg[k].rgt_max = seg[2*k+1].rgt_max;
		if(seg[2*k].rgt == seg[2*k+1].lft)
		seg[k].rgt_max = temp;
	}
	else
	if(seg[2*k].leaf)
	{
		seg[k].lft = seg[2*k].lft;
		seg[k].rgt = seg[2*k+1].rgt;
		seg[k].lft_max = seg[2*k].lft_max;
		seg[k].rgt_max = seg[2*k+1].rgt_max;
		if(seg[2*k].rgt == seg[2*k+1].lft)
		seg[k].lft_max = temp;
	}
  }
	else{
		seg[k].lft = seg[2*k].lft;
		seg[k].lft_max = seg[2*k].lft_max;
		seg[k].rgt = seg[2*k+1].rgt;
		seg[k].rgt_max = seg[2*k+1].rgt_max;
	}
	}
	else
	{
		seg[k].lft = seg[2*k].lft;
		seg[k].lft_max = seg[2*k].lft_max;
		seg[k].rgt = seg[2*k+1].rgt;
		seg[k].rgt_max = seg[2*k+1].rgt_max;
		if(seg[2*k].major_max >= seg[2*k+1].major_max)
		{
			seg[k].major = seg[2*k].major;
			seg[k].major_max = seg[2*k].major_max;
		}
		else{
			seg[k].major = seg[2*k+1].major;
			seg[k].major_max = seg[2*k+1].major_max;
		}
	}
   return;
}
void ask_query(int start, int end, int k, int l, int r) {

  if(end < l || r < start) {
		return;
	}

	if(l <= start && end<=r) {
		Q.push_back(k);
		return;
	}

	int mid = (start+end)/2;
	ask_query(start, mid, 2*k, l, r);
	ask_query(mid+1, end, 2*k+1, l, r);
}

int main() {

	cin >> n >> m;
  map<int,vector<int> > v;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    v[a[i]].push_back(i);
  }


	seg_build(1, n, 1);

	while(m--) {

			int l,r,x;
			cin>>l>>r>>x;

			Q.clear();
			ask_query(1, n, 1, l, r);
			if(Q.size()==1)
			{
				if(seg[Q[0]].major_max >= x)
				cout<<seg[Q[0]].major<<endl;
				else
				cout<<"-1\n";
			}
			else{

				node res;
				int temp,temp_max;
				//int k=0;
				if(seg[Q[0]].rgt == seg[Q[1]].lft){
				temp = seg[Q[0]].rgt_max + seg[Q[1]].lft_max;
				temp_max = max(temp,max(seg[Q[0]].major_max,seg[Q[1]].major_max));
				res.major_max = temp_max;
				if(temp_max == temp)
				res.major = seg[Q[0]].rgt;
				else
				if(temp_max == seg[Q[0]].major_max)
				res.major = seg[Q[0]].major;
				else
				res.major = seg[Q[1]].major;

			  if(seg[Q[0]].leaf == true || seg[Q[1]].leaf == true){

				if(seg[Q[0]].leaf && seg[Q[1]].leaf)
				{
					res.rgt = seg[Q[1]].rgt;
					res.lft = seg[Q[0]].lft;
					if(res.rgt == res.lft){
					res.rgt_max = res.lft_max = seg[Q[0]].major_max + seg[Q[1]].major_max;
					res.leaf = true;
				  }
					else{
					res.rgt_max = seg[Q[1]].major_max;
					res.lft_max = seg[Q[0]].major_max;
				  }
				}
				else
				if(seg[Q[1]].leaf)
				{
					res.rgt = seg[Q[1]].rgt;
					res.lft = seg[Q[0]].lft;
					res.lft_max = seg[Q[0]].lft_max;
					res.rgt_max = seg[Q[1]].rgt_max;
					if(seg[Q[0]].rgt == seg[Q[1]].lft)
					res.rgt_max = temp;
				}
				else
				if(seg[Q[0]].leaf)
				{
					res.rgt = seg[Q[1]].rgt;
					res.lft = seg[Q[0]].lft;
					res.lft_max = seg[Q[0]].lft_max;
					res.rgt_max = seg[Q[1]].rgt_max;
					if(seg[Q[0]].rgt == seg[Q[1]].lft)
					res.lft_max = temp;
				}
			  }
				else{
					res.lft = seg[Q[0]].lft;
					res.lft_max = seg[Q[0]].lft_max;
					res.rgt = seg[Q[1]].rgt;
					res.rgt_max = seg[Q[1]].rgt_max;
				}
				}
				else
				{
					res.lft = seg[Q[0]].lft;
					res.lft_max = seg[Q[0]].lft_max;
					res.rgt = seg[Q[1]].rgt;
					res.rgt_max = seg[Q[1]].rgt_max;
					if(seg[Q[0]].major_max >= seg[Q[1]].major_max)
					{
						res.major = seg[Q[0]].major;
						res.major_max = seg[Q[0]].major_max;
					}
					else{
						res.major = seg[Q[1]].major;
						res.major_max = seg[Q[1]].major_max;
					}
				}
				for(int k=2;k<Q.size();k++){
         // loop start
				 int i = Q[k];
				  node res1;
					//int temp;
  				if(res.rgt == seg[i].lft){
  				temp = res.rgt_max + seg[i].lft_max;
  				temp_max = max(temp,max(res.major_max,seg[i].major_max));
  				res1.major_max = temp_max;
  				if(temp_max == temp)
  				res1.major = res.rgt;
  				else
  				if(temp_max == res.major_max)
  				res1.major = res.major;
  				else
  				res1.major = seg[i].major;

					if(res.leaf == true || seg[i].leaf == true){

					if(res.leaf && seg[i].leaf)
					{
						res1.rgt = seg[i].rgt;
						res1.lft = res.lft;
						if(res1.rgt == res1.lft){
						res1.rgt_max = res1.lft_max = res.major_max + seg[i].major_max;
						res1.leaf = true;
						}
						else{
						res1.rgt_max = seg[i].major_max;
						res1.lft_max = res.major_max;
						}
					}
					else
					if(seg[i].leaf)
					{
						res1.rgt = seg[i].rgt;
						res1.lft = res.lft;
						res1.lft_max = res.lft_max;
						res1.rgt_max = seg[i].rgt_max;
						if(res.rgt == seg[i].lft)
						res1.rgt_max = temp;
					}
					else
					if(res.leaf)
					{
						res1.rgt = seg[i].rgt;
						res1.lft = res.lft;
						res1.lft_max = res.lft_max;
						res1.rgt_max = seg[i].rgt_max;
						if(res.rgt == seg[i].lft)
						res1.lft_max = temp;
					}
					}
					else{
						res1.lft = res.lft;
						res1.lft_max = res.lft_max;
						res1.rgt = seg[i].rgt;
						res1.rgt_max = seg[i].rgt_max;
					}
  				}
  				else
  				{
  					res1.lft = res.lft;
  					res1.lft_max = res.lft_max;
  					res1.rgt = seg[i].rgt;
  					res1.rgt_max = seg[i].rgt_max;
  					if(res.major_max >= seg[i].major_max)
  					{
  						res1.major = res.major;
  						res1.major_max = res.major_max;
  					}
  					else{
  						res1.major = seg[i].major;
  						res1.major_max = seg[i].major_max;
  					}
  				}
					// loop ends
					//res = res1;
					res.lft = res1.lft;
					res.rgt = res1.rgt;
					res.rgt_max = res1.rgt_max;
					res.lft_max = res1.lft_max;
					res.major = res1.major;
					res.major_max = res1.major_max;
					res.leaf = res1.leaf;
				}
				if(res.major_max >= x)
				cout<<res.major<<endl;
				else
				cout<<"-1\n";


			}
		}
}
