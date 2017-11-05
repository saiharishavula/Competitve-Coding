// C++ program to print largest contiguous array sum
#include<iostream>
using namespace std;
 
long long int maxSubArraySum(long int a[], int size)
{
    long long int sum = 0;
	long long int final = 0;
 
    for (int i = 0; i < size; i++)
    {   if(a[i]==0)
         sum=0;
         else
        sum+=a[i];
        if (sum < 0)
            sum= 0;
        if (final < sum)
            final = sum;
    }
    return final;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    //int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    //int n = sizeof(a)/sizeof(a[0]);
    int n;
    cin>>n;
    long int a[100001];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long int max_sum = maxSubArraySum(a, n);
    cout <<max_sum;
    return 0;
}
