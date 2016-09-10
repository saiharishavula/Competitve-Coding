#include<iostream>
#include<cmath>
using namespace std;
int a[1005];
int main()
{
    long long n,i,temp,l,p;
    cin>>n;
    while(n--)
    {
        l=0;
        cin>>temp;
        if(temp&1)
        cout<<temp<<endl;
        else
        {
        while(temp)
        {

            a[l++]=(temp%2);
            temp=temp/2;
        }
        temp=0;
        p=0;
        while (l--) {
		temp += a[l] * (1 << p);
		p++;
	    }

        cout<<temp<<endl;
        }

    }
}
