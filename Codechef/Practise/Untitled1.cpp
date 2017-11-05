#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,i,c,n;
    char s[201];
    cin>>t;
    while(t--)
    {  c=0;
    	cin>>s;
    	n=strlen(s);
    	for(i=4;i<n-4;i++)
    	{
    		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
    		c++;
    	}
    	cout<<c+4<<"/"<<n<<endl;
    }
    return 0;
}

