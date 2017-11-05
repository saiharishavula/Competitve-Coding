import sys
from collections import defaultdict
sys.setrecursionlimit(5000)
global ans
ans=0
def read():
	return sys.stdin.readline()
def longestpath(v,c):
	global ans
	visit[v]=True
	c+=1
	if ans<=c:
		ans = c
	for j in range(len(a[v])):
		if visit[a[v][j]]==False:
			longestpath(a[v][j],c)
n = int(read())
a = defaultdict(list)
visit = [False]*n
inp = []
for i in range(n):
	temp = int(read())
	inp.append(temp)
	if temp!=-1:
		a[temp-1].append(i)
for i in range(n):
	if inp[i]==-1:
		longestpath(i,0)
print(ans)
