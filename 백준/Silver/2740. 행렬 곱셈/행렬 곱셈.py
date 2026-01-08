n,m=map(int,input().split())
a=[]
b=[]
for _ in range(n):
    a.append(list(map(int,input().split())))
m,k=map(int,input().split())
for _ in range(m):
    b.append(list(map(int,input().split())))
for i in range(n):
    for j in range(k):
        result=0
        for w in range(m):
            result+=a[i][w]*b[w][j]
        print(result,end=' ')
    print()