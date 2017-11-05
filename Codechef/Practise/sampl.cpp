#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int main() {
    int t,n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        int flag;
        for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=0;i<n-2;i++)
            {
            	if(a[i]<a[i+1]&&a[i+1]<a[i+2]||a[i+1]<a[i+2]&&a[i+2]<a[i]||a[i+2]<a[i]&&a[i]<a[i+1])
            	flag=0;
            	else
            	{
            		flag=1;
            	}
            }
            if(flag==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

