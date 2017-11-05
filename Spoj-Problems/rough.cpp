#include<iostream>
using namespace std;
int n;
int L[100];
int R[100];
void merge(int a[],int s,int m,int e){

  int i=0,j=0,k=s;
  int n1 = m-s+1;
  int n2 = e-m;
  for(i=0;i<n1;i++)
  L[i]=a[i+s];
  for(i=0;i<n2;i++)
  R[i]=a[i+m+1];
  i=0;
  while(i<n1 && j<n2){
    if(L[i]<=R[j]){
      a[k++] = L[i];
      i++;
    }
    else{
      a[k++] = R[j];
      j++;
    }
  }
  while(i<n1){
    a[k++] = L[i];
    i++;
  }
  while(j<n2){
    a[k++] = R[j];
    j++;
  }

}
void sort(int a[],int s,int e){
  if(s<e){
    int m = s+(e-s)/2;
    sort(a,s,m);
    sort(a,m+1,e);
    merge(a,s,m,e);
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
    sort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
  }
}
