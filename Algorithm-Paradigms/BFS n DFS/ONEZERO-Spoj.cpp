#include<bits/stdc++.h>
using namespace std;
// one of the best problem of bfs
// observe clearly the division done by school method and relate it to modulo
// remainder should be either 0,1,2,....n-1. our aim is to get rem as 0.
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1){
    cout<<n<<endl;
    continue;
    }
    int parent[n+1];
    memset(parent,-1,sizeof(parent));
    int bit[n+1];
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    bit[1] = 1;
    int rem=1;
    while(!q.empty()){
      rem = q.front();
      q.pop();
      if(rem==0){
        stack<int> s;
        s.push(bit[rem]);
        while(parent[rem]){
          int temp = parent[rem];
          s.push(bit[temp]);
          rem = temp;
        }
        while(!s.empty()){
          cout<<s.top();
          s.pop();
        }
        cout<<endl;
      }
      else{
        int temp = (rem*10)%n;
        if(parent[temp]==-1){
          parent[temp] = rem;
          bit[temp] = 0;
          q.push(temp);
        }
        temp = (rem*10+1)%n;
        if(parent[temp]==-1){
          parent[temp]=rem;
          bit[temp]=1;
          q.push(temp);
        }
      }
    }
  }
}
