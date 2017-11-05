#include<iostream>
#include<cstring>
using namespace std;
char s[100005];
int main()
{
    int t,len;

    cin>>t;
    while(t--)
    {
        int a[27] = {0};
        int c=0;
        cin>>s;
        len = strlen(s);
        for(int i=0;i<len;i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {

            if(a[i]!=0)
                c++;
        }
        cout<<c<<endl;
    }
}
