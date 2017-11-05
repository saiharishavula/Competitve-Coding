#include<iostream>
#include<cstring>
using namespace std;
char a[1000005];
char b[1000005];
int main()
{
    long int t,i,s[2],p[2],l;
    cin>>t;
    while(t--)
    {
        s[0]=p[0]=0;
        s[1]=p[1]=0;
        cin>>a;
        cin>>b;
        l=strlen(a);

        for(i=0;i<l;i++)
        s[a[i]-'0']++;
        for(i=0;i<l;i++)
        {
             if(a[i]!=b[i])
                p[a[i]-'0']++;
        }
      // cout<<s[0]<<" "<<s[1]<<endl;

        if(s[0]==0||s[1]==0)
        {
            cout<<"Unlucky Chef\n";
            continue;
        }
        else
        {
            if(p[0]<=p[1])
            {
                cout<<"Lucky Chef\n";
                cout<<p[0]+(p[1]-p[0])<<endl;
            }
            else
            {
                cout<<"Lucky Chef\n";
                cout<<p[1]+(p[0]-p[1])<<endl;
            }

        }

    }
}
