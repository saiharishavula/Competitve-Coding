#include<iostream>
using namespace std;
/*If n = (p1^a1)(p2^a2)(p3^a3).....(pk^ak) then Euler function can be found using formula:
	then f (n) = n * (1 – 1/p 1) * (1 – 1/p 2) * … * (1 – 1/p k) */
int phi(int n)
{
     int result = n;
     int i;
       for(i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) 
         result -= result / i; 
        while (n % i == 0) 
         n /= i; 
       } 
       if (n > 1)
       result -= result / n; 
       return result; 
}
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        printf("%d\n",phi(num));
    }
    return 0;
}
