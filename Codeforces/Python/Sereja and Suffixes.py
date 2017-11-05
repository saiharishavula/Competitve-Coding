from collections import defaultdict
import sys
def read():
	return sys.stdin.readline()

def solve():
	n,m = map(int,read().split())
	a = list(map(int,read().split()))
	b = []
	res = defaultdict(int)
	for i in range(n):
		res[a[i]]+=1
	prev = len(list(res.values()))
	res[a[0]]-=1
	ans = [0]
	ans.append(prev)
	for i in range(1,n):
		if res[a[i-1]]==0:
			prev-=1
		res[a[i]]-=1
		ans.append(prev)
	for i in range(m):
		temp = int(read())
		print(ans[temp])
	

if __name__ == '__main__':
	solve()
