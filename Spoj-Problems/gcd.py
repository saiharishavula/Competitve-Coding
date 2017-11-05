def gcd(x,y):
    if(x==0)
	return y
	else
	return gcd(x%y,x)
t=int(raw_input())
while t>0 :
   t=t-1
   a=int(raw_input())
   b=int(raw_input())
   print(gcd(a,b))
   print("\n")
   
