n=int(input())
cost=[0]
cost.extend(list(map(int,input().split())))
expensive=[0]*(n+1)
expensive[1]=cost[1]
for i in range(2,n+1):
    max_ex=cost[i]
    for j in range(1,(i//2)+1):
        if max_ex<expensive[j]+expensive[i-j]:
            max_ex=expensive[j]+expensive[i-j]
    expensive[i]=max_ex
print(expensive[n])