#include<iostream>
#include<vector>
using namespace std;
#define PB push_back
vector<int> prime;
void get_prime(int n)
{
    vector<bool> visited(n+1);
    int i,j;
    for(i=2;i<=n;i++)
    {
        if(!visited[i])
        {
            prime.PB(i);
            for(j=2;i*j<=n;j++)
                visited[i*j]=true;
        }
    }

}

int main()
{
    int t,n,i,j;
    int f[41];
    int count[41]={0};
    cin>>t;
    for(i=0;i<4;i++)
        f[i]=1;
    for(i=4;i<=40;i++)
        f[i]=f[i-1]+f[i-4];
    get_prime(f[40]);
    for(i=1;i<=40;i++)
    {
        for(j=0;j<prime.size();j++)
        {
            if(prime[j]>f[i])
                break;
            count[i]++;
        }

    }

    while(t--)
    {
        cin>>n;
        cout<<count[n]<<endl;
    }

}
