import heapq
r=int(input())
for _ in range(r):
    count=0
    n=int(input())
    x=list(map(int,input().split()))
    heapq.heapify(x)
    while len(x)!=1:
        n1=heapq.heappop(x)
        n2=heapq.heappop(x)
        count+=(n1+n2)
        heapq.heappush(x,n1+n2)
    print(count)