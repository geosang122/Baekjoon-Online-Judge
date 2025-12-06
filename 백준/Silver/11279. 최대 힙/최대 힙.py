import heapq
import sys
input=sys.stdin.readline

q=[]
r=int(input())
for _ in range(r):
    n=int(input())
    if n==0:
        if len(q)==0:
            print(0)
        else:
            num=heapq.heappop(q)
            print(num*-1)
    else:
        heapq.heappush(q,-n)