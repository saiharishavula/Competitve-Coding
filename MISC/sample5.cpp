#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
#define size 65536
int main()
{
    
    char b[size];
    int t=0,n,k,cnt=0;
    int c,j;
    scanf("%d %d\n",&n,&k);
    while((c = fread(b,1,size,stdin))>0)
    {
               for(j=0;j<c;j++)
               {
                if(b[j]=='\n')
                {
                              if(t%k==0)cnt++;
                              t = 0;
                }
                else
                {
                              t = (t*10) + (b[j]-'0');                
                }              
               }
     }
    printf("%d\n",cnt);    
    return 0;
}
