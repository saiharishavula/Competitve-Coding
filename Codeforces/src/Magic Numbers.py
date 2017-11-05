s = input()
i=0
n = len(s)
ok = True
while i<n:
	if i+2<n:
		if s[i:i+3]=="144" or s[i:i+2]=="14" or s[i]=="1":
			if s[i:i+3]=="144":
				i+=3
			elif s[i:i+2]=="14":
				i+=2
			else:
				i+=1
		else:
			ok = False
			break
	elif i+1<n:
		if s[i:i+2]=="14" or s[i]=="1":
			if s[i:i+2]=="14":
				i+=2
			else:
				i+=1
		else:
			ok = False
			break
	else:
		if s[i]!="1":
			ok = False
		i+=1
if ok==True:
	print("YES")
else:
	print("NO")