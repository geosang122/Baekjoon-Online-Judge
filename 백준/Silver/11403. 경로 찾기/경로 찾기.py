from collections import deque
def route(k):
    global n
    visited=[False]*(n+1)
    q=deque([k])
    while q:
        num=q.popleft()
        for i in range(1,n+1):
            if adj[num][i]==1 and not visited[i]:
                q.append(i)
                visited[i]=True
                adj[k][i]=1

n=int(input())
adj=[[0]for _ in range(n+1)]
for i in range(1,n+1):
    adj[i].extend(list(map(int,input().split())))
for i in range(1,n+1):
    route(i)
for i in range(1,n+1):
    for j in range(1,n+1):
        print(adj[i][j],end=' ')
    print()