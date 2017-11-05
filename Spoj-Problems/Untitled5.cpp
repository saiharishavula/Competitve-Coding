
//#include<bits/stdc++.h>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
 
using namespace std;
#define NIL -1
#define MAX 10000001
#define CON 1000000007

long int a[MAX];
void initiate()
{
	for(long long int i=0;i<MAX;i++)
	a[i]=NIL;
}
int fib(long long int n)
{
	if(a[n]==NIL)
	{
		if(n<=1)
		a[n]=n;
		else
		a[n]=fib(n-1)+fib(n-2);
	}
	return a[n];
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		initiate();
	//	cout<<CON<<endl;
		cout<<fib(n-1)%CON<<endl;
	}
	
}

