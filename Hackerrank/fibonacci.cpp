
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,n;
    long long int sum=0,prev,temp;
    cin>>a>>b>>n;
    prev=b;
    sum=(a*a)+b;
    for(int i=1;i<n-2;i++)
        {
        temp=prev;
        prev=sum;
        sum=(sum*sum)+temp;

    }
    cout<<sum<<endl;

    return 0;
}
