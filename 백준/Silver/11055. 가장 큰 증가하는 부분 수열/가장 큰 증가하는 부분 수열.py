n=int(input())
a=[0]
a.extend(list(map(int,input().split())))
d=[0 for _ in range(n+1)]
for i in range(1,n+1):
    max_sum=0
    for j in range(1,i):
        if a[j]<a[i] and max_sum<d[j]:
            max_sum=d[j]
    d[i]=max_sum+a[i]
print(max(d))