from collections import defaultdict
n,m = map(int,input().split())
d = defaultdict(str)
for i in range(m):
	a,b = input().split()
	if len(a)<=len(b):
		d[a] = a
	else:
		d[a] = b
s = input().split()
print(" ".join(d[i] for i in s))