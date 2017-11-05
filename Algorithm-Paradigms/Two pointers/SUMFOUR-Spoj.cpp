#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+1];
	long long b[n+1];
	long long c[n+1];
	long long d[n+1];
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i]>>c[i]>>d[i];
	vector<long long> x;
	vector<long long> y;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	x.push_back(a[i]+b[j]);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	y.push_back((c[i]+d[j]));
	long long int ans=0;
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
  int co = x.size();
	int i=0,j=co-1;
  int freqx=1,freqy=1;
	while(i<co && j>=0)
	{
		long long temp  = x[i]+y[j];
		while(i+1<co && x[i]==x[i+1])freqx++,i++;
		while(j-1>=0 && y[j]==y[j-1])freqy++,j--;
		if(temp==0)
		ans+=(freqy*freqx),freqy=1,freqx=1,i++,j--;
		else
		if(temp<0)
		freqx=1,i++;
		else
		freqy=1,j--;
	}
	cout<<ans;
}
