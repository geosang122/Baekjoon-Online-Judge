k=int(input())
a=[0]
a.extend(list(map(int,input().split())))
di=[0 for _ in range(k+1)] #i번 인덱스까지 증가
dd=[0 for _ in range(k+1)] #i번 인덱스부터 감소
for i in range(k+1): 
    inc=0
    for j in range(i,-1,-1):
        if a[j]<a[i] and di[j]+1>inc:
            inc=di[j]+1
    di[i]=inc
for i in range(k,-1,-1): 
    dec=1
    for j in range(i+1,k+1):
        if a[j]<a[i] and dd[j]+1>dec:
            dec=dd[j]+1
    dd[i]=dec
for i in range(k+1):
    dd[i]+=di[i]
print(max(dd)-1)