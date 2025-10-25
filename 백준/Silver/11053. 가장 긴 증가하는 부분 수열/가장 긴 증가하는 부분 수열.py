n=int(input())
a=[0]
a.extend(list(map(int,input().split())))
d=[0 for _ in range(n+1)]
for i in range(n+1):
    mx=0
    for j in range(i,-1,-1):
        if a[i]>a[j] and d[j]+1>mx:
            mx=d[j]+1
    d[i]=mx    
print(max(d))