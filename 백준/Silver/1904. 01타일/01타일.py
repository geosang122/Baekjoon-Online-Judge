n=int(input())
d=[1,2]
for _ in range((n-1)//2):
    d[0]+=d[1]
    d[1]+=d[0]
    d[1]%=15746
    d[0]%=15746
print((d[(n+1)%2])%15746)