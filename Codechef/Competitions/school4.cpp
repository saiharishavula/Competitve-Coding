#include<iostream>
#include<cmath>
using namespace std;
long int max(long int x,long int y)
{
	return x>y?x:y;
}
long int min(long int x,long int y)
{
	return x<y?x:y;
}
int main()
{
	int t,l1,w1,l2,w2,flag;
	long int d1,d2;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>l1>>w1>>l2>>w2;
		d1=l1*w1;
		d2=l2*w2;
		if((l1==l2&&w2>=w2))
		{
			cout<<max(d1,d2)<<" "<<d1+d2<<endl;
		}
		else
		{
		if(d1>d2)
		{
			if((l2<=l1)&&(w2<=l1)&&(w2<=w1)&&(l2<=w1))
			{
			flag=1;
			cout<<d1<<" "<<d1+d2<<endl;
		    }
		    if((l2<=l1)&&(w2<=w1))
			{
			flag=1;
			cout<<d1<<" "<<d1+d2<<endl;
		    }
			
		}
		if(d2>=d1)
		{
				if((l1<=l2)&&(w1<=l2)&&(w1<=w2)&&(l1<=w2))
				{
				flag=1;
			    cout<<d2<<" "<<d1+d2<<endl;
		        }
		    if((l1<=l2)&&(w1<=w2))
			{
			flag=1;
			cout<<d2<<" "<<d1+d2<<endl;
		    }
		}
		if(flag==0&&l1>=l2)
		{
			cout<<(l1-l2)*w1+d2<<" "<<d1+d2<<endl;
		}
		if(flag==0&&l1<l2)
		{
			cout<<(l2-l1)*w2+d1<<" "<<d1+d2<<endl;
		}
	   }
	}
}
