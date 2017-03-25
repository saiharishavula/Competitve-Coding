#include<bits/stdc++.h>
using namespace std;
 // easy code for intuition but o(n^3)is not necessary for this problem
 int main()
 {
   long long int a[102][103];
   int n,s,t,m;
   cin>>n>>s>>t;

   for(int i=0;i<=n;i++)
   for(int j=0;j<=n;j++)
   a[i][j]=INT_MAX;
   cin>>m;
   while(m--)
   {
     int x,y,val;
     cin>>x>>y>>val;
     a[x][y] = val;
   }

   // algo
   for(int k=1;k<=n;k++)// one by one intermediate vertices
   for(int i=1;i<=n;i++)
   for(int j=1;j<=n;j++) // every pair of src n destination
   {
     if(a[i][j]>a[i][k]+a[k][j])
     a[i][j] = a[i][k]+a[k][j];
   }
   int count=0;
   for(int i=1;i<=n;i++)
   if(a[i][s]<=t || s==i)count++;
   cout<<count;
 }
