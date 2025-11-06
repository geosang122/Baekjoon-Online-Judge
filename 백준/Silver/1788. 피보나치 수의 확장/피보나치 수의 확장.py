n=int(input())
if n==0:
    print(0)
    print(0)
elif n==1:
    print(1)
    print(1)
else:
    if n>0 or (-n+1)%2==0:
        print(1)
    else:
        print(-1)
    if n<0:
        n*=-1
    dp=[0,1]
    for i in range(n//2):
        dp[0]+=dp[1]
        dp[1]+=dp[0]
        dp[0]%=1000000000
        dp[1]%=1000000000
    print(dp[n%2])