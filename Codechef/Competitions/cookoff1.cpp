#include<bits/stdc++.h>
using namespace std;
int main()
{
float a,b,c,d;
cin>>a>>b>>c>>d;
int flag = 0;
if(a/b == c/d || b/a == c/d || a/b == d/c || b/a == d/c)
    flag=1;
    if(a/c == b/d || c/a == b/d || a/c == d/b || c/a == d/b)
    flag=1;
    if(a/d == c/b || d/a == c/b || a/d == b/c || d/a == b/c)
    flag=1;
if(flag==0)
    cout<<"Impossible\n";
else
    cout<<"Possible\n";


}
