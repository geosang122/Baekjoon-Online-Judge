from collections import deque
import sys
input=sys.stdin.readline

def bfs(start_node):
    global n
    q=deque([start_node])
    visited[start_node]=True
    while q:
        num=q.popleft()
        for i in adj[num]:
            if not visited[i]:
                q.append(i)
                visited[i]=True


count=0
n,m=map(int,input().split())
adj=[[] for _ in range(n+1)]
visited=[False for _ in range(n+1)]
for _ in range(m):
    n1,n2=map(int,input().split())
    adj[n1].append(n2)
    adj[n2].append(n1)

for i in range(1,n+1):
    if not visited[i]:
        bfs(i)
        count+=1

print(count)