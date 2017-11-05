#include<stdio.h>
#include<math.h>
//using namespace std;
int cal(long long int x)
{
    long long int y;
    if(x==3)
        return 1;
    if(x%3==0)
        return 0;
    y = sqrt(x);
    for(int i=5;i<=y;i=i+6)
        if(x % i == 0 || x % (i+2) == 0)
        return 0;
    return 1;
}
int main()
{
     int t;
    scanf("%d",&t);
    long long int a,b,c;
    while(t--)
    {   c=0;
        //int n,m;
        scanf("%lld %lld",&a,&b);
        if(a<=2)
        {
        	c++;
        	a=3;
        }
        if(a%2==0)
        a++;
        for(int i=a;i<=b;i+=2)
        {
            if(cal(i))
                c++;
        }
        printf("%lld\n",c);
    }
}    
