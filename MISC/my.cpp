#include<iostream>
using namespace std;
int row,col;
int a[100][100];
int queue[100][3];
int rear;
int head;
bool isempty()
{
  return rear>=head?true:false;
}
void deque(int &x,int &y,int &c)
{
  x = queue[rear][0];
  y = queue[rear][1];
  c = queue[rear][2];
  rear++;
}
void enque(int x,int y,int c)
{
  queue[head][0] = x;
  queue[head][1] = y;
  queue[head][2] = c;
  head++;
}
int bfs()
{
  enque(1,1,0);
  int x,y,c;
  a[1][1]=0;
  while(!isempty())
  {
    deque(x,y,c);
    //cout<<x<<" "<<y<<endl;
    if(x == row && y == col)
    return c;
    if(x+1 <= row && a[x+1][y])
    {
      enque(x+1,y,c+1);
      a[x+1][y] = 0;
    }
    if(x-1 >= 1 && a[x-1][y])
    {
      enque(x-1,y,c+1);
      a[x-1][y] = 0;
    }
    if(y+1 <= col && a[x][y+1])
    {
      enque(x,y+1,c+1);
      a[x][y+1] = 0;
    }
    if(y-1 >= 1 && a[x][y-1])
    {
      enque(x,y-1,c+1);
      a[x][y-1] = 0;
    }
  }
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>row>>col;
    rear=0;
    head=0;
    for(int i=1;i<=row;i++)
    for(int j=1;j<=col;j++)
    cin>>a[i][j];
    cout<<bfs()<<endl;
  }
}
