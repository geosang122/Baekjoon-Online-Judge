def connector(n,m):
    return n+m-1

k=int(input())
for _ in range(k):
    a,b=map(int,input().split())
    print(connector(a,b))