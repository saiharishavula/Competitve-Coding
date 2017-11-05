#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
struct Pair
{
	string s;
	int a;
	int b;
	bool operator<(const Pair& rhs)const
	{
		if(a==rhs.a)
		return b>rhs.b;
		else
		return a<rhs.a;
	}

};
int main()
{
	int n,m,i;
	int c=1;
	std::vector<Pair> v;
	Pair p;


	cin>>n;
	cin>>m;
	string s1;
	int a1;
	int b1;
	for(i=0;i<n;i++)
	{
		cin>>p.s;
		cin>>p.a;
		cin>>p.b;
		v.push_back(p);
	}
	std::sort( v.begin(), v.end() );
	int f=1;
	for(i=0;i<n-2;i++)
	{
		if(c==v[i].a)
		{
			if((v[i].b!=v[i+1].b)&&((v[i+1].b!=v[i+2].b&&v[i+2].a==c)||(v[i+2].a!=c)))
			{

			cout<<v[i].s<<" "<<v[i+1].s<<endl;
			c++;
	    	}
	    	else
	    	{
	    		cout<<"?"<<endl;
	    		c++;
	    	}


		}
	}
	if(v[n-2].a==c)
	{
		if(v[n-2].b!=v[n-1].b)
		{
			cout<<v[n-2].s<<" "<<v[n-1].s;
		}
	}


}
