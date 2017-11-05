#include<iostream>
#include<cstring>
using namespace std;
char s[100005];
int main()
{
    cin>>s;
    int c=0;
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]<='Z' && s[i]>='A')
            c++;
    }
    cout<<c+1<<endl;
}
