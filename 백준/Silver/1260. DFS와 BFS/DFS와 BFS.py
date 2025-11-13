from collections import deque
def dfs(s):
    stack=[]
    stack.append(s)
    while stack:
        num=stack.pop()
        if dfs_visited[num]==True:
            continue
        else:
            dfs_visited[num]=True
            print(num,end=' ')
            for j in reversed(adj[num]):
                if not dfs_visited[j]:
                    stack.append(j)
    print()
def bfs(s):
    q=deque([s])
    bfs_visited[s]=True
    while q:
        num=q.popleft()
        print(num,end=' ')
        for i in adj[num]:
            if not bfs_visited[i]:
                q.append(i)
                bfs_visited[i]=True
    print()
n,v,s=map(int,input().split())
adj=[[] for _ in range(n+1)]
dfs_visited=[False] *(n+1)
bfs_visited=[False] *(n+1)
for i in range(v):
    n1,n2=map(int,input().split())
    adj[n1].append(n2)
    adj[n2].append(n1)
for i in adj:
    i.sort()
dfs(s)
bfs(s)