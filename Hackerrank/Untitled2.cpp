  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;
int a[25];
int n;
int maxi=-1000000000;
void rec(int index){
    if(index==n){
        int sum=0;
        for(int i=1;i<=floor(n/2);i++){
            sum+=abs(a[i]-a[n-i+1]);
        }
        maxi=max(maxi,sum);
        return;
    }
    int temp=a[index];
    if(a[index-1]%2==0 and a[index+1]%2==0){
        a[index]=(a[index-1]+a[index+1])/2;
        rec(index+1);
    }
    a[index]=temp;
    rec(index+1);
    return;
}
int main() {
    int t;
    cin>>t;
    assert(t>=1 and t<=5000);
    while(t--){
        cin>>n;
        assert(n>=3 and n<=20);
        maxi=-1000000000;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            assert(a[i]>=1 and a[i]<=10000);
        }
        rec(2);
        cout<<maxi<<endl;
    } 
    return 0;
}
