/* Derivation !!! Should do it on Paper !!!*/
#include<iostream>
using namespace std;
int main()
{
    int t,avg,x,n,sum,max_no;
    cin>>t;
    while(t--)
    {

        cin>>x>>avg;
        n=avg-x; //do it
        sum=(avg+1)*n;
        max_no=sum-(n*(n-1)/2); // as it gives max number because difference will be minimum
        cout<<max_no<<endl;

    }

}
