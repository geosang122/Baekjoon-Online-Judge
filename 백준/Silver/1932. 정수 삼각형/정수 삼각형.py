n=int(input())
d=list()
for i in range(n):
    d.append(list(map(int,input().split())))
for k in range(n-2,-1,-1):
    for i in range(k+1):
        d[k][i]+=max(d[k+1][i],d[k+1][i+1])
print(d[0][0])