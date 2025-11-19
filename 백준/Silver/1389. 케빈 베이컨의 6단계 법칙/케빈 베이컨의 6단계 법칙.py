from collections import deque

def bacon(k):
    distance=[-1 for _ in range(n+1)]
    q=deque()
    count=0
    for i in range(1,n+1):
        if adj[k][i]!=0:
            q.append(i)
            distance[i]=1
            count+=1
    while count!=n:
        node=q.popleft()
        for i in range(1,n+1):
            if adj[node][i]!=0 and distance[i]==-1:
                distance[i]=distance[node]+1
                q.append(i)
                count+=1
    for i in range(1,n+1):
        adj[k][0]+=distance[i]

n,m=map(int,input().split())
min=10000000
adj=[[0 for _ in range(n+1)]for _ in range(n+1)] 
for _ in range(m):
    a,b=map(int,input().split())
    adj[a][b]=1
    adj[b][a]=1
for i in range(1,n+1):
    bacon(i)
    if adj[i][0]<min:
        min=adj[i][0]
for i in range(1,n+1):
    if min==adj[i][0]:
        print(i)
        break