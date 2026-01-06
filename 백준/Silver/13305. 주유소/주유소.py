import sys
input=sys.stdin.readline

st=int(input())
dist=list(map(int,input().split()))
price=list(map(int,input().split()))
total_cost=0
min_price=price[0]

for i in range(st-1):
    if price[i]<min_price:
        min_price=price[i]
    total_cost+=min_price*dist[i]

print(total_cost)