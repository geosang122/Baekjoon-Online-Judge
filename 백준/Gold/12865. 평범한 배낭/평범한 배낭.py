p,w=map(int,input().split())
prod=[]
maxv=0
for _ in range(p):
    prod.append(tuple(map(int,input().split())))
prod.sort(key=lambda x:(x[0],x[1]))
dp=[[0 for _ in range(w+1)] for _ in range(p+1)]
for i in range(1,p+1):
    iw,iv=prod[i-1][0],prod[i-1][1]
    for j in range(1,w+1):
        if j<iw:
            dp[i][j]=dp[i-1][j]
        else:
            dp[i][j]=max(dp[i][j-1],dp[i-1][j-iw]+iv,dp[i-1][j])
for i in range(1,p+1):
    if maxv<dp[i][w]:
        maxv=dp[i][w]
print(maxv)