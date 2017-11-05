#include<bits/stdc++.h>
using namespace std;
int h[100005]={0};
    int v[100005]={0};
    int h_r[100005]={0};
    int v_r[100005]={0};
int main() {

    int n,k;
    cin>>n>>k;

    int r,c;
    cin>>r>>c;

    int v_d_up = 0;
    int v_d_down = 0;
    int h_d_lef = 0;
    int h_d_rig = 0;

    h_d_lef = min(r,c)-1;
    h_d_rig = n-max(r,c);

    v_d_up = min(n-r,c-1);
    v_d_down = min(n-c,r-1);

    v_r[v_d_up+1] = 1;
    h_r[h_d_lef+1] = 1;
    h[c] = 1;
    v[n-r+1] = 1;

    for(int i=0;i<k;i++)
        {
        int x,y;
        cin>>x>>y;
        if(x==r || y==c)
        {
            if(x==r)
                h[y] = -1;
            else
                v[n-x+1] = -1;

        }
        else
            if(x>r && y>c && (x-r == y-c))
        {

            int d = y-c;
            h_r[h_d_lef+1+d] = -1;
        }
        else
            if(x<r && y<c && (r-x == c-y))
        {

            int d = c-y;
            h_r[h_d_lef+1-d] = -1;
        }
        else
            if(x>r && y<c && (x-r == c-y))
        {

            int d = x-r;
            v_r[v_d_up+1-d] = -1;
        }
        else
            if(x<r && y>c && (r-x == y-c))
        {

            int d = y-c;
            v_r[v_d_up+1+d] = -1;
        }

    }


    long long sum=0,i=c+1;
    while(1)
    {
        if(h[i]==-1 || i> n || i<1)
            break;
        i++;
        sum++;

    }
    //cout<<sum<<endl;
    i = c-1;
    while(1)
    {
        if(h[i]==-1 || i> n || i<1)
            break;
        i--;
        sum++;

    }
   // cout<<sum<<endl;
    i = n-r+2;
    while(1)
    {
        if(v[i]==-1 || i> n || i<1)
            break;
        i++;
        sum++;

    }
    //cout<<sum<<endl;
    i = n-r;
    while(1)
    {
        if(v[i]==-1 || i> n || i<1)
            break;
        i--;
        sum++;

    }
   // cout<<sum<<endl;
    i = h_d_lef+2;
    int len = h_d_lef + h_d_rig + 1;

    while(1)
    {
        if(h_r[i]==-1 || i> len || i<1)
            break;
        i++;
        sum++;

    }
    //cout<<sum<<endl;
    i = h_d_lef;
    len = h_d_lef + h_d_rig + 1;
    while(1)
    {
        if(h_r[i]==-1 || i> len || i<1)
            break;
        i--;
        sum++;

    }
//cout<<sum<<endl;

len = v_d_up + v_d_down + 1;
//cout<<v_d_up<<" "<<v_d_down<<" "<<len<<endl;
i = v_d_up+2;
    while(1)
    {
        if(v_r[i]==-1 || i> len || i<1)
            break;
        i++;
        sum++;

    }
   // cout<<sum<<endl;
len = v_d_up + v_d_down + 1;
    i = v_d_up;
    while(1)
    {
        if(v_r[i]==-1 || i> len || i<1)
            break;
        i--;
        sum++;

    }
cout<<sum;
}
