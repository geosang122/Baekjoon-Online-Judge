from collections import deque

n,m,k,x=map(int,input().split())
mini_dist=[0 for _ in range(n)]
visited=[False]*n
visited[x-1]=True
edge=[[] for _ in range(n)]
#m번 입력(edge)
for _ in range(m):
    s,e=map(int,input().split())
    edge[s-1].append(e-1)
#최소 거리 구하기
q=deque([x-1])
while q:
    node=q.popleft()
    for w in edge[node]:
        if not visited[w]:
            q.append(w)
            mini_dist[w]=mini_dist[node]+1
            visited[w]=True
#찾기
exist=False
for i in range(n):
    if mini_dist[i]==k:
        print(i+1)
        exist=True
if not exist:
    print(-1)