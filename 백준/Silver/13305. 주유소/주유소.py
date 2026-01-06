st=int(input())
dist=list(map(int,input().split()))
price=list(map(int,input().split()))
visited=[False]*st
visited[st-1]=True
total=0
while True:
    distance=0
    min=1000000000000
    minidx=-1
    for i in range(st):
        if visited[i]:
            break
        if price[i]<min:
            minidx=i
            min=price[i]
    if minidx==-1:
        break
    for j in range(minidx,st):
        if visited[j]:
            break
        distance+=dist[j]
        visited[j]=True
    total+=(distance*min)
print(total)