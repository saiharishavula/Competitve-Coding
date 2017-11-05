#include<iostream>
using namespace std;
int main()
{
    int t,n,x,y,i,c;

    cin>>t;
    while(t--)
    {
          int a[505]={0};
          c=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {

            cin>>x>>y;
            a[y]++;
        }
        for(i=0;i<=500;i++)
        {

            if(a[i]!=0)
            {

                if(a[i]>0)
                    c=1;
            }
        }
        if(c==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";


    }

}
