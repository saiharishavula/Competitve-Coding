#include<iostream>
using namespace std;
/*It is trivial for N = 1.
For N > 1, assume that the first player will lose (the game starts with a losing state). 
This means all possible moves will lead to a winning state.
Let's pick 1. Now it is the second player's turn. Let x be the number he will pick to win this game. 
Consequently, the state after these 2 picks is a losing one. 
Note that by picking x at the first turn, the first player can also reach this losing state.
 This contradicts our above assumption. Hence, the first player always wins the game.*/
int main()
{
	 int t,s;
     long long int n;
     cin>>t;
     while(t--)
     {
         cin>>n>>s;
         if(s==0)
            cout<<"Airborne wins."<<endl;
         else
            cout<<"Pagfloyd wins."<<endl;
     }
     return 0;
}
