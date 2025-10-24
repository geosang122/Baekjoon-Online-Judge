dp=[[[0]*21 for _ in range(21)] for _ in range(21)]
for i in range(21):
    for j in range(21):
        for w in range(21):
            if(i==0 or j==0 or w==0):
                dp[i][j][w]=1
for i in range(21):
    for j in range(21):
        for w in range(21):
            if i*j*w==0 :
                continue
            elif i<j<w:
                dp[i][j][w]=dp[i][j][w-1]+dp[i][j-1][w-1]-dp[i][j-1][w]
            else:
                dp[i][j][w]=dp[i-1][j][w]+dp[i-1][j-1][w]+dp[i-1][j][w-1]-dp[i-1][j-1][w-1]
while True:
    a,b,c=map(int,input().split())
    if a==-1 and b==-1 and c==-1:
        break
    elif a<=0 or b<=0 or c<=0:
            print(f'w({a}, {b}, {c}) = 1')
    else:
        print(f'w({a}, {b}, {c}) = ',end='')
        if a<0:
            a=0
        if b<0:
            b=0
        if c<0:
            c=0
        if a>20 or b>20 or c>20:
            a=b=c=20
        print(dp[a][b][c])