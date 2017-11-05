t = int(input())
while t>0:
	n,m = map(int,input().split())
	a = list(map(int,input().split()))
	visit = [False]*(n+2)
	for i in range(m):
		visit[a[i]]=True
		visit[a[i]-1]=True
		visit[a[i]+1]=True
	ans=0
	for i in range(1,n+1):
		if visit[i]:
			ans+=1
	print(ans)
	t-=1


