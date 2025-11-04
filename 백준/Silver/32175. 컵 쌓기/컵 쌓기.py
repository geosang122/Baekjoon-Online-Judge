n,h=map(int,input().split())
d=[0 for _ in range(h+1)]
d[0]=1
cups=list(map(int,input().split()))
for i in range(1,h+1):
    for cup in cups:
        if i>=cup:
            d[i]+=d[i-cup]
            d[i]%=1000000007
print(d[h])