#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define getchar_unlocked getchar
#define pb push_back
#define mp make_pair
#define f first
#define sc second
#define pii pair<int,int>
#define M 1000000007
#define inf (int)(2e+9)
#define all(o) (o).begin(), (o).end()
/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;*/
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int lcm(int a, int b) { return (a * (b / gcd(a, b))); }
LL max(LL a,LL b,LL c){return max(a,max(b,c));}
inline LL power(LL x,LL y)
{
    LL ans=1;
    while(y>0){
        if(y&1)
            ans=(ans*x)%M;
        x=(x*x)%M;
        y/=2;
    }
    return ans;
}
inline int read()
{
	int ret = 0;
	int c = getchar_unlocked();

	while(c<'0' || c>'9')
		c = getchar_unlocked();
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}
deque<int> q,mini;
void push(int x) {
 q.pb(x);
 while(!mini.empty() && mini.back() > x) {
  mini.pop_back();
 }
 mini.pb(x);
}

int pop() {
 int x = q.front();
 q.pop_front();
 if(x == mini.front()) {
  mini.pop_front();
 }
 return x;
}
int get_min() {
 return mini.front();
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[5];
        int x;
        scanf("%s",str);
        if(str[0]=='P' && str[1]=='U'){
            scanf("%d",&x);
            push(x);
        }
        else if(str[1]=='O'){
            printf("%d\n",q.front());
            pop();

        }
        else
        {
            printf("%d\n",get_min());
        }
    }
    return 0;
}

