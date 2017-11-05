#include<iostream>
#include<deque>
using namespace std;
long int a[1000005];
long int n,k,i;
void go_for_deque(long int a[],long int n,long int k)
{
    std::deque<long int> Q;

    for(i=0;i<k;i++)
    {
        if((!Q.empty())&&(a[i]>=a[Q.back()]))
            Q.pop_back();
        Q.push_back(i);

    }
    for(i=k;i<n;i++)
    {
        cout<<a[Q.front()];
        if((!Q.empty())&&(Q.front()<=(i-k)))
            Q.pop_front();
        while((!Q.empty())&&(a[i]>=a[Q.back()]))
            Q.pop_back();
        Q.push_back(i);
        cout<<" ";

    }
    cout<<a[Q.front()];

}
int main()
{
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   cin>>k;
   go_for_deque(a,n,k);
   return 0;



}
