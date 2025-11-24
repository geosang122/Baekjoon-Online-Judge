import sys
input=sys.stdin.readline

n,m=map(int,input().split())
mtr=[]
pf=[[0 for _ in range(n+1)] for _ in range(n+1)]
for _ in range(n):
    mtr.append(list(map(int,input().split())))

for i in range(n+1):
    for j in range(n+1):
        pf[i][j]+=pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1]+mtr[i-1][j-1]

for _ in range(m):
    x1,y1,x2,y2=map(int,input().split())
    sum=pf[x2][y2]-pf[x1-1][y2]-pf[x2][y1-1]+pf[x1-1][y1-1]
    print(sum)