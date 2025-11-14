from collections import deque
def bfs():
    q=deque([1])
    visited[1]=True
    while q:
        num=q.popleft()
        for node in adj[num]:
            if not visited[node]:
                q.append(node)
                visited[node]=True
n_node=int(input())
n_edge=int(input())
adj=[[] for _ in range(n_node+1)]
visited=[False]*(n_node+1)
for _ in range(n_edge):
    n1,n2=map(int,input().split())
    adj[n1].append(n2)
    adj[n2].append(n1)
bfs()
count=0
for i in visited:
    if i==True:
        count+=1
print(count-1)