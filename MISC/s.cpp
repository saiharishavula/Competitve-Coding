#include<bits/stdc++.h>
using namespace std;
#include<cstdlib>
#define M 1000000007
long long int a[100001];
#define gc getchar_unlocked

static char stdinBuffer[1024];
static char* stdinDataEnd = stdinBuffer + sizeof (stdinBuffer);
static const char* stdinPos = stdinDataEnd;

void readAhead(size_t amount)
{
    size_t remaining = stdinDataEnd - stdinPos;
    if (remaining < amount) {
       memmove(stdinBuffer, stdinPos, remaining);
       size_t sz = fread(stdinBuffer + remaining, 1, sizeof (stdinBuffer) - remaining, stdin);
       stdinPos = stdinBuffer;
       stdinDataEnd = stdinBuffer + remaining + sz;
       if (stdinDataEnd != stdinBuffer + sizeof (stdinBuffer))
         *stdinDataEnd = 0;
    }
}

long long int readInt()
{
    readAhead(18);

    int x = 0;
    bool neg = false;
    if (*stdinPos == '-') {
       ++stdinPos;
       neg = true;
    }

    while (*stdinPos >= '0' && *stdinPos <= '9') {
       x *= 10;
       x += *stdinPos - '0';
       ++stdinPos;
    }

    return neg ? -x : x;
}
int main()
{
	int t,x,n,i;
	long long int m,sum;
	//cin.sync_with_stdio(false);
	t=readInt();
	while(t--)
	{   sum=0;
		//scanf("%d%d%lld",&n,&x,&m);
		//cin>>n>>x>>m;
			n=readInt();
				x=readInt();
					m=readInt();
		for(i=1;i<=n;i++)
		{
			//	scanf("%lld",&a[i]);
			//cin>>a[i];
				a[i]=readInt();
				a[i]=a[i]%M;
		}
		m=m%M;
		if(x==1)
		{
			printf("%lld\n",a[1]);
		//cout<<a[1]<<endl;
			continue;
			
		}
		if(x==2)
		{
			printf("%lld\n",(a[2]+((m*a[1])%M))%M);
			//cout<<(a[2]+((m*a[1])%M))%M<<endl;
			continue;
		}
		
	
		while(m--)
		{
			for(i=2;i<=n;i++)
			{
				a[i]=(a[i]+a[i-1])%M;
			}
		}
		printf("%ll\n",a[x]);
	}
}
