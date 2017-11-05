#include <cstdio>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
}
int main() {
    while(true)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);
        if(k==-1)
        break;
        if(k<3)
        {
            printf("0\n");
            continue;
        }
        long long int kt,nt;
        nt=n*(n-1)/2;
        if(k%2==0)
        kt=(k/2)*((k-2)/2);
        else
        kt=((k-1)/2)*((k-1)/2);
        long long int temp=gcd(nt,kt);
        nt=nt/temp;
        kt=kt/temp;
        if(kt==nt)
        {
            printf("1\n"); 
            continue;
        }
        printf("%lld/%lld\n",kt,nt);
    }
    return 0;
} 
