dp = [0,0,1,1,1]
mod = 1000000007
for i in range(5,1000001):
	temp = (dp[i-3]%mod + dp[i-2]%mod)%mod
	dp.append(temp)
t = int(input())
while t>0:
	n = int(input())
	print(dp[n])
	t-=1


