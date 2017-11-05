def func(x):
	while x%3==0:
		x = x//3
	while x%2==0:
		x = x//2
	return x

n = int(input())
a = [func(int(x)) for x in input().split()]	
if(len(set(a))==1):
	print("YES")
else:
	print("NO")
