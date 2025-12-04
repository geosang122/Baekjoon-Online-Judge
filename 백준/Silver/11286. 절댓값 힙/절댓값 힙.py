import heapq
q=[]
r=int(input())
for _ in range(r):
    n=int(input())
    if n==0:
        if len(q)==0:
            print(0)
        else:
            x,y=heapq.heappop(q)
            print(y)
    else:
        heapq.heappush(q,(abs(n),n))
    