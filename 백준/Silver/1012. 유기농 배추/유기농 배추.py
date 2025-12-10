import sys
input = sys.stdin.readline
from collections import deque

move=[(-1,0),
      (1,0),
      (0,-1),
      (0,1)]

def bfs(r,c):
    q=deque([])
    q.append((r,c))
    visited[r][c]=True
    while q:
        row,col=q.popleft()
        for i in range(4):
            mr,mc=move[i]
            newr=row+mr
            newc=col+mc
            if 0<=newr<b and 0<=newc<a:
                if g[newr][newc]==1 and not visited[newr][newc]:
                    visited[newr][newc]=True
                    q.append((newr,newc))

rp=int(input())
for _ in range(rp):
    count=0
    a,b,c=map(int,input().split())
    g=[[0 for _ in range(a)] for _ in range(b)]
    visited=[[False for _ in range(a)]for _ in range(b)]
    for _ in range(c):
        col,row=map(int,input().split())
        g[row][col]=1
    for i in range(b):
        for j in range(a):
            if g[i][j]==1 and not visited[i][j]:
                bfs(i,j)
                count+=1
    print(count)