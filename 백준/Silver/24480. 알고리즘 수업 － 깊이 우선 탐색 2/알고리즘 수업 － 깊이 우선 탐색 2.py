from collections import deque

n,m,r=map(int,input().split())
visited=[0 for _ in range(n+1)]
count=1
g=[[]for _ in range(n+1)]
for _ in range(m):
    a,b=map(int,input().split())
    g[a].append(b)
    g[b].append(a)
q=deque([r])
while q:
    node=q.pop()
    if visited[node]==0:
        visited[node]=count
        count+=1
        g[node].sort()
        for k in g[node]:
            q.append(k)

for i in range(1,n+1):
    print(visited[i])