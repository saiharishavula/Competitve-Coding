from math import sqrt
d = {}
N=111
f = [0]*N
def primepower(n):
	while n%2==0:
		f[2]+=1
		n//=2
	for i in range(3,int(sqrt(n))+1,2):
		while n%i==0:
			f[i]+=1
			n//=i
	if n!=1:
		f[n]+=1
def findfactors(n):
	primepower(n)
	res=1
	for i in range(2,N):
		res*=(f[i]+1)
	return res
def solve():
	d[1]=1
	for i in range(2,N):
		temp = findfactors(i)
		d[temp] = i
if __name__ == '__main__':
	solve()
	t = int(input())
	while t>0:
		n = int(input())
		s = str(d.get(n))
		if s!="None":
			print(s)
		else:
			print("nai")
		t-=1

