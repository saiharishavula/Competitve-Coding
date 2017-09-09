import sys
def read():
	return sys.stdin.readline()
def binsrch(val):
	s=0
	e=n-1
	while s<=e:
		mid = int(s+(e-s)/2)
		if a[mid]<=val:
			s = mid+1
		else:
			e = mid-1
	return s
n = int(read())
a = list(map(int,read().split()))
q = int(read())
list.sort(a)
while q>0:
	val = int(read())
	print(binsrch(val))
	q-=1