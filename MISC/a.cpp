#include <bits/stdc++.h>
using namespace std;
const int max1 = 100005;
int n, m, a[max1];
vector<int> Q;

struct node {
	map<int, int> Count;
	int major;
} seg[4*max1];



void seg_build(int l, int r, int k) {
	if(l == r) {
		seg[k].Count.clear();
		seg[k].Count[a[l]]+=1;

		seg[k].major = a[l];
		return;
	}

	int mid = (l+r)/2;
	seg_build(l, mid, 2*k);
	seg_build(mid+1, r, 2*k+1);

	int length = (r-l+1);
	seg[k].Count.clear();

	unordered_map<int, int>::iterator it = seg[2*k].Count.begin();
	while(it != seg[2*k].Count.end()) {
		seg[k].Count[it->first] += it->second;
		it++;
	}

	it = seg[2*k+1].Count.begin();
	while(it != seg[2*k+1].Count.end()) {
		seg[k].Count[it->first] += it->second;
		it++;
	}

	if(seg[k].Count[seg[2*k].major] > (length/2)) {
		   seg[k].major = seg[2*k].major;

	} else if (seg[k].Count[seg[2*k+1].major] > (length/2)) {
			seg[k].major = seg[2*k+1].major;

	} else {
		seg[k].major = -1;
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
  for(int i=1;i<=n;i++)
  cin>>a[i];

	seg_build(1, n, 1);

	while(m--) {

			int l,r,length,ok,x;
			cin>>l>>r>>x;

			length = r-l+1;
			ok = 0;

			Q.clear();
			ask_query(1, n, 1, l, r);

			for(int i=0;i<Q.size();i++) {
				int count = 0;
				for(int j=0;j<Q.size();j++) {
					count+= seg[Q[j]].Count[seg[Q[i]].major];
				}

				if(count >= x) {
					cout <<seg[Q[i]].major<<"\n";
					ok = 1;
					break;
				}
			}

			if (!ok) {
				cout << "-1\n";
			}
		}
}
