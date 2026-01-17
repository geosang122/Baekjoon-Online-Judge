from collections import deque

n,m,r=map(int,input().split())
graph=[[] for _ in range(n+1)]
visited=[True] + [False]*n
count=1
visitnum=[0 for _ in range(n+1)]
for _ in range(m):
    a,b=map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)

q=deque([r])

while q:
    i=q.pop()
    if not visited[i]:
        visited[i]=True
        visitnum[i]=count
        count+=1
        if graph[i]!=None:
            graph[i].sort(reverse=True)
            for k in graph[i]:
                if not visited[k]:
                    q.append(k)

for w in range(1,n+1):
    print(visitnum[w])