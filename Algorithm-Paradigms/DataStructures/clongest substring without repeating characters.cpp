#include<bits/stdc++.h>
using namespace std;
int longestSubstring(char a[])
{
    int final = 1;
    int len = strlen(a);
    int curr_sum = 1;
    int prev_index;
    int start=0  ;
    int final_start = 0,final_end = len-1;
    int temp_arr[27];
    for(int i=0;i<26;i++)
        temp_arr[i] = -1;
    temp_arr[a[0]-'A']=0;
    int i;
    for(i=1;i<len;i++)
    {

        prev_index = temp_arr[a[i]-'A'];
        if(prev_index==-1 || i-curr_sum > prev_index)
            curr_sum++;
        else
        {
            if(final<=curr_sum)
            {
               final = curr_sum;
               final_start = start;
               final_end = i-1;
            }
            start = prev_index+1;

            curr_sum = i - prev_index;
        }
        temp_arr[a[i]-'A'] = i;

    }
    if(final<=curr_sum)
    {
        final_end = i-1;
        final_start = start;
        final = curr_sum;
    }
    for(i=final_start;i<=final_end;i++)
        cout<<a[i];
    cout<<"\n";

    return final;


}
int main()
{
    char str[100];
    cin>>str;
    int len =  longestUniqueSubsttr(str);
    printf("%d\n", len);
    return 0;
}
