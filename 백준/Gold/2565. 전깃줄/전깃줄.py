n=int(input())
a=[0]*501
for _ in range(n):
    k,v=map(int,input().split())
    a[k]=v
d=[0]*501
for i in range(501):
    mx=0
    for j in range(i):
        if 0<a[j]<a[i] and mx<d[j]:
            mx=d[j]
    d[i]=mx+1
print(n-max(d))