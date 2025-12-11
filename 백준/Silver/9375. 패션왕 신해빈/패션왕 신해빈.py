rp=int(input())
for _ in range(rp):
    clothes=dict()
    n=int(input())
    for _ in range(n):
        name,cls=map(str,input().split())
        if cls in clothes:
            clothes[cls]+=1
        else:
            clothes[cls]=1
    sum=1
    for count in clothes.values():
        sum*=(count+1)
    print(sum-1)