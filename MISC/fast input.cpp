#include <algorithm>
    #include <bitset>
    #include <cassert>
    #include <cctype>
    #include <cmath>
    #include <cstdio>
    #include <cstdlib>
    #include <cstring>
    #include <ctime>
    #include <deque>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <limits>
    #include <list>
    #include <map>
    #include <numeric>
    #include <queue>
    #include <set>
    #include <sstream>
    #include <stack>
    #include <string>
    #include <utility>
    #include <vector>
 
    using namespace std;
 
    #ifndef ONLINE_JUDGE
    	bool debug = false;
    #else
    	bool debug = true;
    #endif
 
    typedef vector <int> vi;
    typedef pair <int, int> pii;
 
    //definition
    #define gc() getchar()
    #define pc() putchar()
 
    #define MOD 1000000007
    #define MAX 100005
    #define pi 3.14159265358979
    #define ESP (1e-9)
 
    #define llu long long unsigned
    #define lld long long
    #define ld long
 
    #define fu(i,a,n) for(i=a;i<n;i++)
    #define fue(i,a,n) for(i=a;i<=n;i++)
    #define fd(i,n,a) for(i=n;i>a;i--)
    #define fde(i,n,a) for(i=n;i>=a;i--)
    #define fr(i,a) for(i=0;i<a;i++)
    #define fe(i,a) for(i=0;i<=a;i++)
 
    #define sf_d(n) scanf("%d",&n)
    #define sf_ld(n) scanf("%ld",&n)
    #define sf_lld(n) scanf("%lld",&n)
 
    #define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
    #define all(vi) vi.begin(), vi.end()
    #define len length()
    #define pb push_back
    #define sz size()
    #define mp make_pair
    #define clr clear()
    #define ff first
    #define ss second
    #define imax numeric_limits<int>::max()
    #define imin numeric_limits<int>::min()
    #define ldmax numeric_limits<ld>::max()
    #define ldmin numeric_limits<ld>::min()
    #define lldmax numeric_limits<lld>::max()
    #define lldmin numeric_limits<lld>::min()
    //end of definition
 
    //fast input
 
    int scan_d()	{register int c=gc();int x=0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()){x = (x<<1) + (x<<3) + c - 48;}return x;}
    ld scan_ld()    {int ip=getchar(),flag=1;ld ret=0;for(;ip<'0'||ip>'9';ip=getchar())if(ip=='-'){flag=-1;ip=getchar();break;}for(;ip>='0'&&ip<='9';ip=getchar())ret=ret*10+ip-'0';return flag*ret;}
    lld scan_lld()    {int ip=getchar(),flag=1;lld ret=0;for(;ip<'0'||ip>'9';ip=getchar())if(ip=='-'){flag=-1;ip=getchar();break;}for(;ip>='0'&&ip<='9';ip=getchar())ret=ret*10+ip-'0';return flag*ret;}
    llu scan_llu()    {int ip=getchar();llu ret=0;for(;ip<'0'||ip>'9';ip=getchar());for(;ip>='0'&&ip<='9';ip=getchar())ret=ret*10+ip-'0';return ret;}
 
    //end of fast input
 
    //fast output
 
    //no line break
    void print_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[10];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<10);}
    void print_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[11];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
    void print_lld(lld n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[21];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<21);}
    void print_llu(llu n)     {int i=21;char output_buffer[21];do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<21);}
 
    //new line
    void println_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[11];output_buffer[10]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
    void println_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[12];output_buffer[11]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<12);}
    void println_lld(lld n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[22];output_buffer[21]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
    void println_llu(llu n)     {int i=21;char output_buffer[22];output_buffer[21]='\n';do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
 
    //special char
    char sp;
    void printsp_d(int n)     {if(n<0){n=-n;putchar('-');}int i=10;char output_buffer[11];output_buffer[10]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<11);}
    void printsp_ld(ld n)     {if(n<0){n=-n;putchar('-');}int i=11;char output_buffer[12];output_buffer[11]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<12);}
    void printsp_lld(lld n)     {if(n<0){n=-n;putchar('-');}int i=21;char output_buffer[22];output_buffer[21]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
    void printsp_llu(llu n)     {int i=21;char output_buffer[22];output_buffer[21]=sp;do{output_buffer[--i]=(n%10)+'0';n/=10;}while(n);do{putchar(output_buffer[i]);}while(++i<22);}
 
    //end of fast output
 
 
    int ar[100001],n,c;
 
 
    int fnc(int x)
    {
    	int i,temp;
    	temp=1;
    	lld prev;
    	prev=ar[0];
    	fu(i,1,n)
    	{
    		if(ar[i]-prev>=x)
    		{
    			temp++;
    			if(temp==c)
    				return 1;
    			prev=ar[i];
    		}
    	}
    	return 0;
    }
 
 
    void binsearch()
    {
    	int l,r,mid;
    	l=0;
    	r=ar[n-1];
    	while(l<r)
    	{
    		mid=(l+r)/2;
    		if(fnc(mid)==1)
    			l=mid+1;
    		else
    			r=mid;
    	}
    	println_lld(l-1);
    }
 
    int main()  
    {
    /*	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);*/
    	lld t,i;
    	t=scan_lld();
    	while(t--)
    	{
    		n=scan_d();
    		c=scan_d();
    		fr(i,n)
    			ar[i]=scan_d();
    		sort(ar,ar+n);
    		binsearch();
    	}
    	return 0;
    } 
