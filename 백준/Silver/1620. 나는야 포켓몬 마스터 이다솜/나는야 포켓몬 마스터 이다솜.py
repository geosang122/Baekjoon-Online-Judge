n,m=map(int,input().split())
a=dict()
b=dict()
for i in range(1,n+1):
    k=input()
    a[k]=i
    b[i]=k
for _ in range(m):
    l=input()
    try:
        print(a[l])
    except:
        print(b[int(l)])