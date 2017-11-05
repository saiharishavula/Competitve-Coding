#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    //std::ios_base::sync_with_stdio(false);
    int n,x1,y1,x2,y2,x3,y3;
    int min_area=INT_MAX;
    int max_area=0;
    int temp_area,min_index,max_index;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        temp_area= abs(x1*y2 + y1*x3 + x2*y3 - x1*y3 - x2*y1 - x3*y2);
        if(min_area>=temp_area)
        {
            min_area=temp_area;
            min_index=i+1;
        }
        if(max_area<=temp_area)
        {
            max_area=temp_area;
            max_index=i+1;
        }
    }
    cout<<min_index<<" "<<max_index;
}
