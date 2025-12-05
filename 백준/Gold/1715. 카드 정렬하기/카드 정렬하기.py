import heapq
q=[]
count=0
n=int(input())
for _ in range(n):
    x=int(input())
    heapq.heappush(q,x)
for _ in range(n-1):
    x1=heapq.heappop(q)
    x2=heapq.heappop(q)
    count+=(x1+x2)
    heapq.heappush(q,x1+x2)
print(count)