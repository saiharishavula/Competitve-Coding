#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int A,B,N,M;
		cin>>N>>M;
		A=1;
		B=1;
		for(int j=1;j<N;j++)
		{
			A=A+B;
			if(A>M)
			A=A%M;
			B=A+B;
			if(B>M)
			B=B%M;
		}
		cout<<(A%M)<<"/"<<(B%M)<<endl;
    }
}
		 
