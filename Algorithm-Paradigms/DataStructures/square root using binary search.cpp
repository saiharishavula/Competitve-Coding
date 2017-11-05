#include<iostream>
using namespace std;
double find_sqrt(double n)
{
    double start = 0;
    double end;
    if(n<1)
        end = 1;
    else
        end = n;
    double precision = 0.000001;
    while(end-start>=precision)
    {
        double mid = (start+end)/2;
        double mid_value = mid*mid;
        if(mid_value==n)
            return mid;
        else
        {
            if(mid_value>n)
               end = mid;
            else
               start = mid  ;
        }

    }
    double k = (start+end)/2;
    return k;
}
int main()
{
    double n;
    cin>>n;
    cout<<find_sqrt(n);
}
