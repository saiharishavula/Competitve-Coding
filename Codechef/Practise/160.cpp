#include<bits/stdc++.h>
using namespace std;

int a[51][51];
int aa[51];

int main()
{
  //  ios;
    int t,n,c,last,tmp;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        memset(aa,0,sizeof(aa));
        while(1){
            tmp=0;
            for(int i=0; i<n; i++){
                if(aa[i]==0){
                    last=-1;
                    c=0;
                    for(int j=0; j<n; j++){
                        if(a[i][j]!=0 && a[i][j]!=last && aa[j]!=1){
                            last=a[i][j];
                            c++;
                        }
                    }
                    if(c<=1){
                        aa[i]=1;
                        tmp++;
                    }
                }
            }
            if(tmp==0)break;
        }
        tmp=0;
        for(int i=0; i<n; i++){
            if(aa[i]==0)tmp++;
        }
        cout<<tmp<<endl;
    }

    return 0;
}
