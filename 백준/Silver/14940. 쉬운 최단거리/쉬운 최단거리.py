from collections import deque
mv=[(-1,0),
   (1,0),
   (0,1),
   (0,-1)]

q=deque([])
n,m=map(int,input().split())
gr=[]
for _ in range(n):
    gr.append(list(map(int,input().split())))
dist=[[-1 for _ in range(m)] for _ in range(n)]
for i in range(n):
    for j in range(m):
        if gr[i][j]==0:
            dist[i][j]=0
        elif gr[i][j]==2:
            dist[i][j]=0
            q.append((i,j))

while q:
    r,c=q.popleft()
    for dr,dc in mv:
        newr,newc=r+dr,c+dc
        if 0<=newr<n and 0<=newc<m and dist[newr][newc]==-1:
            q.append((newr,newc))
            dist[newr][newc]=dist[r][c]+1

for i in range(n):
    for j in range(m):
        print(dist[i][j],end=' ')
    print()