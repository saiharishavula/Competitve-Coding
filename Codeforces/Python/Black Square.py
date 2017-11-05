import sys
def read():
	return sys.stdin.readline()
a = []
a = list(map(int,read().split()))
b = read()
print(b)
ans=0
for i in b:
	ans+=a[int(i)-1]
print(ans)