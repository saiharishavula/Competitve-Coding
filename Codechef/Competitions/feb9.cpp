#include<bits/stdc++.h>
using namespace std;
long long ncr(int n, int r) {
    if(r > n / 2) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main(){
int t,n,m,k,p;
cin>>t;
while(t--){
cin>>n>>m>>p>>k;
if(p==0){
cout<<"1\n";
continue;}
int c=0;
if((n&1)==0 && (m&1)==0)
c++;
if(((n*m)&1)==0)
c++;
if(c==2)
cout<<"1\n";
else
if(c==0)
cout<<"0\n";
else{
  p--;
  double i = (double)((k-(2*p)-2)*(k-(2*p)-2))/4*(1+p-k);
  double ans = exp(i);
  ans = (double)ans/2;
  ans = (double)1.0-ans;
  printf("%.6f\n",ans);
}
}
}
