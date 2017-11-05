import sys
def read():
	return sys.stdin.readline()
a = []
r,c = map(int,read().split())
for i in range(r):
	a.append(list(read()))
row,col=0,0
for i in range(r):
	if "S" not in a[i]:
		row+=1
for j in range(c):
	ok = False
	for i in range(r):
		if a[i][j]=='S':
			ok = True
			break
	if ok==False:
		col+=1

print(row*c + col*r - row*col)


