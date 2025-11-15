from collections import deque
n=int(input())
k=int(input())
adj=[[] for _ in range(n+1)]
visited=[False]*(n+1)
for _ in range(k):
    n1,n2=map(int,input().split())
    adj[n1].append(n2)
    adj[n2].append(n1)
visited[1]=True
for i in adj[1]:
    visited[i]=True
    for j in adj[i]:
        visited[j]=True
count=0
for i in range(2,n+1):
    if visited[i]==True:
        count+=1
print(count)