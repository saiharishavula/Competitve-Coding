#include<bits/stdc++.h>
using namespace std;
int present[100005][20];
//int v;
int sumQuery(int aux[5][5], int tli, int tlj, int rbi,int rbj){
    int res = aux[rbi][rbj];
    if (tli > 0)
       res = res - aux[tli-1][rbj];
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];
   return res;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    //cin>>m;
    for(int i=1;i<=n;i++)
    for(int j=0;j<=16;j++)
    present[i][j] = 0;
    int count[n+1]={0};
    for(int i=1;i<=n;i++)
    {
      char mat[5][5];
      int aux[5][5];
      for(int j=1;j<5;j++)
      {
        string s;
        cin>>s;
        for(int x=0;x<4;x++)
        mat[j-1][x] = s[x];
          for(int k=0;k<4;k++)
          {
            if(s[k]=='1')
            count[i]++;
          }
      }
      for (int j=0; j<4; j++)
      aux[0][j] = (mat[0][j]-'0');
   for (int j=1; j<4; j++)
      for (int k=0; k<4; k++)
         aux[j][k] = (mat[j][k]-'0') + aux[j-1][k];
   for (int j=0; j<4; j++)
      for (int k=1; k<4; k++)
         aux[j][k] += aux[j][k-1];
         bool has = false;
      for(int j=0;j<4;j++)
      for(int k=0;k<4;k++)
      for(int x=j;x<4;x++)
      for(int y=k;y<4;y++)
      {
        int val = sumQuery(aux, j, k, x, y);
        //cout<<j<<" "<<k<<" "<<x<<" "<<y<<endl;
        //cout<<val<<endl;
        if(val == ((x-j+1)*(y-k+1))){
        present[i][val]++;
        }
      }
      // start
      if(present[i][16])
      {
        present[i][1]-=16;
        present[i][2]-=24;
        present[i][3]-=16;
        present[i][4]-=26;
        present[i][6]-=12;
        present[i][8]-=6;
        present[i][9]-=4;
        present[i][12]-=2;
      }
      if(present[i][12])
      {
        present[i][1]-=12;
        present[i][2]-=17;
        present[i][3]-=10;
        present[i][4]-=9;
        present[i][6]-=7;
        present[i][8]-=2;
        present[i][9]-=2;
      }
      if(present[i][9])
      {
        present[i][1]-=9;
        present[i][2]-=12;
        present[i][3]-=6;
        present[i][4]-=4;
        present[i][6]-=2;
      }
      if(present[i][8])
      {
        present[i][1]-=8;
        present[i][2]-=10;
        present[i][3]-=4;
        present[i][4]-=5;
        present[i][6]-=2;
      }
      if(present[i][6])
      {
        present[i][1]-=6;
        present[i][2]-=7;
        present[i][3]-=2;
        present[i][4]-=2;
      }
      if(present[i][4])
      {
        present[i][1]-=4;
        present[i][2]-=4;
      }
      if(present[i][3])
      {
        present[i][1]-=3;
        present[i][2]-=2;
      }
      if(present[i][2])
      {
        present[i][1]-=2;
      }
    }

  //cout<<v;
  /*for(int i=1;i<=n;i++){
  for(int j=0;j<=16;j++)
  {
    if(present[i][j])
    cout<<j<<" ";
  }
  cout<<endl;
}*/
    while(m--)
    {
      //cout<<"jero";
      int x,l,r,pos;
      bool ok = false;
      cin>>x;
      int sum=0;
      if(x==1)
      {
        cin>>l>>r;
        //bool ans = false;
        for(int i=l;i<=r;i++)
        {
          if(count[i]){
          for(int j=0;j<=16;j++)
          {
            if(present[i][j])
            sum^=j;
            if(present[i][j] && j!=1)
            ok = true;
          }
          }
        }
      //  cout<<endl;
        if(sum || ok)
        cout<<"Pishty\n";
        else
        cout<<"Lotsy\n";
      }
      else
      {
        cin>>pos;
        char mat[5][5];
        int aux[5][5];
        int temp=0;
        for(int j=1;j<5;j++)
        {
          string s;
          cin>>s;
          for(int x=0;x<4;x++)
          mat[j-1][x] = s[x];
            for(int k=0;k<4;k++)
            {
              if(s[k]=='1')
              temp++;
            }
        }
        count[pos] = temp;
        for(int x=0;x<=16;x++)
        present[pos][x] = 0;

        for (int j=0; j<4; j++)
        aux[0][j] = mat[0][j]-'0';
     for (int j=1; j<4; j++)
        for (int k=0; k<4; k++)
           aux[j][k] = (mat[j][k]-'0') + aux[j-1][k];
     for (int j=0; j<4; j++)
        for (int k=1; k<4; k++)
           aux[j][k] += aux[j][k-1];
        for(int j=0;j<4;j++)
        for(int k=0;k<4;k++)
        for(int x=j;x<4;x++)
        for(int y=k+1;y<4;y++)
        {
          int val = sumQuery(aux, j, k, x, y);
          if(val == ((x-j+1)*(y-k+1)))
          present[pos][val]++;
        }
        if(present[pos][16])
        {
          present[pos][1]-=16;
          present[pos][2]-=24;
          present[pos][3]-=16;
          present[pos][4]-=26;
          present[pos][6]-=12;
          present[pos][8]-=6;
          present[pos][9]-=4;
          present[pos][12]-=2;
        }
        if(present[pos][12])
        {
          present[pos][1]-=12;
          present[pos][2]-=17;
          present[pos][3]-=10;
          present[pos][4]-=9;
          present[pos][6]-=7;
          present[pos][8]-=2;
          present[pos][9]-=2;
        }
        if(present[pos][9])
        {
          present[pos][1]-=9;
          present[pos][2]-=12;
          present[pos][3]-=6;
          present[pos][4]-=4;
          present[pos][6]-=2;
        }
        if(present[pos][8])
        {
          present[pos][1]-=8;
          present[pos][2]-=10;
          present[pos][3]-=4;
          present[pos][4]-=5;
          present[pos][6]-=2;
        }
        if(present[pos][6])
        {
          present[pos][1]-=6;
          present[pos][2]-=7;
          present[pos][3]-=2;
          present[pos][4]-=2;
        }
        if(present[pos][4])
        {
          present[pos][1]-=4;
          present[pos][2]-=4;
        }
        if(present[pos][3])
        {
          present[pos][1]-=3;
          present[pos][2]-=2;
        }
        if(present[pos][2])
        {
          present[pos][1]-=2;
        }
      }
    }
  }
}
