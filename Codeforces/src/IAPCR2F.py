a=[[]]
def dfs(v,visit,val):
	print(a[v])
	visit[v]=True
	val+=cost[v-1]
	for i in a[v]:
		#print(i)
		if visit[i]==False:
			dfs(i,visit,val)
if __name__ == '__main__':
	t = int(input())
	for T in range(1,t+1):
		visit = [False]*1001
		n,m = map(int,input().split())
		for i in range(1,n+1):
			a.append(i)
		cost = list(map(int,input().split()))
		for i in range(m):
			u,v = map(int,input().split())
			a[u].append(v)
			a[v].append(u)
		print(a[2])
		sum=[]
		count=0
		visit = [False]*1001
		for i in range(1,n+1):
			if visit[i]==False:
				#print(i)
				val=0
				dfs(i,visit,val)
				sum.append(val)
				count+=1
		print("Case "+str(T)+": "+str(count))
		print(" ".join(str(i) for i in sum))
		a.clear()
		

		


  