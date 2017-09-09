import sys
def read():
	return sys.stdin.readline()
n,k = map(int,read().split())
a = list(map(int,(read().split())))
sum=0
for i in range(n-1):
	if a[i]+a[i+1]<k:
		sum+=(k-a[i]-a[i+1])
		a[i+1] = k-a[i]
		
print(str(sum)+'\n'+' '.join(map(str,a)))


	 