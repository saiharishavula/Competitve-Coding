def isvowel(s):
	if(s=='A' or s=='E' or s=='I' or s=='O' or s=='U' or s=='Y'):
		return True
	return False
def solve():
	s = input()
	res = 1
	count = 1
	for i in range(len(s)):
		if isvowel(s[i]):
			if res<count:
				res = count
			count=1
		else:
			count+=1
	if res<count:
		res = count
	print(res)

if __name__ == '__main__':
	solve()
