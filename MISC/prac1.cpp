#include<iostream>
using namespace std;
int a[13][6];
int n;
int ans=-1;
int x[3] = {1,1,1};
int y[3] = {1,0,-1};
void recur(int i,int j,int bomb,int coins){

  if(coins<0)
  return;
  if(i>n){
    if(coins>ans)
    ans = coins;
    return;
  }
  int newi,newj;
  for(int k=0;k<3;k++){
    newi = i+x[k];
    newj = j+y[k];
    if(newj<=4 && newj>=0){

    if(a[i][j]==1)
    recur(newi,newj,bomb,coins+1);
    else
    if(a[i][j]==2){
      if(bomb!=-1 && newi-bomb<=5)
      recur(newi,newj,bomb,coins);
      else
      recur(newi,newj,bomb,coins-1);
      if(bomb==-1)
      recur(newi,newj,i,coins);
    }
    else
    recur(newi,newj,bomb,coins);

   }
   }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ans=-1;
    cin>>n;
    for(int i=n;i>0;i--)
    for(int j=0;j<5;j++)
    cin>>a[i][j];
    recur(0,2,-1,0);
    cout<<ans<<endl;
  }

}
