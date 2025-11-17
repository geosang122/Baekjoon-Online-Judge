from collections import deque
k=int(input())
for _ in range(k):
    n=int(input())
    visited=[False]*(n+1)
    p=list(map(int,input().split()))
    adj=[[]for _ in range(n+1)]
    for i in range(n):
        adj[i+1].append(p[i])
        adj[p[i]].append(i+1)
    count=0
    for j in range(1,n+1):
        if not visited[j]:
            count+=1
            q=deque([j])
            visited[j]=True
            while q:
                num=q.popleft()
                for w in adj[num]:
                    if not visited[w]:
                        q.append(w)
                        visited[w]=True
    print(count)