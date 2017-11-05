//Given an array of n integers, find the 3 elements such that a[i] < a[j] < a[k] and i < j < k in 0(n) time
#include<iostream>
#include<vector>
using namespace std;
vector<int> increasing3(int a[],int n)
{
    vector<int> v;
    int seq1 = a[0];
    int seq2[2];
    bool seq2filled = false;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=seq1)
         a[i]=seq1;
        else
            if(!seq2filled || a[i]<=seq2[1])
            {
                seq2[0] = seq1;
                seq2[1] = a[i];
                seq2filled = true;
            }
            else
            {
                v.push_back(seq2[0]);
                v.push_back(seq2[1]);
                v.push_back(a[i]);
                break;
            }

    }
    return v;

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> v = increasing3(a,n);
    if(v.size()==0)
        cout<<"not found\n";
    else
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
