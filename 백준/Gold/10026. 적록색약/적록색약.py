from collections import deque
import copy

mv=[(-1,0),
    (1,0),
    (0,-1),
    (0,1)]

def redGreenColorBlind():
    q=deque([])
    global n
    count=0
    for i in range(n):
        for j in range(n):
            if clr2[i][j]=='B':
                q.append((i,j))
                clr2[i][j]='X'
                count+=1
                while q:
                    r,c=q.popleft()
                    for dr,dc in mv:
                        nr,nc=r+dr,c+dc
                        if 0<=nr<n and 0<=nc<n and clr2[nr][nc]=='B':
                            q.append((nr,nc))
                            clr2[nr][nc]='X'
    for i in range(n):
        for j in range(n):
            if clr2[i][j]!='X':
                q.append((i,j))
                clr2[i][j]='X'
                count+=1
                while q:
                    r,c=q.popleft()
                    for dr,dc in mv:
                        nr,nc=r+dr,c+dc
                        if 0<=nr<n and 0<=nc<n and clr2[nr][nc]!='X':
                            q.append((nr,nc))
                            clr2[nr][nc]='X'
    print(count)

def nonBlind():
    q=deque([])
    global n
    count=0
    for i in range(n):
        for j in range(n):
            if clr[i][j]=='R':
                q.append((i,j))
                clr[i][j]='X'
                count+=1
                while q:
                    r,c=q.popleft()
                    for dr,dc in mv:
                        nr,nc=r+dr,c+dc
                        if 0<=nr<n and 0<=nc<n and clr[nr][nc]=='R':
                            q.append((nr,nc))
                            clr[nr][nc]='X'
    for i in range(n):
        for j in range(n):
            if clr[i][j]=='G':
                q.append((i,j))
                clr[i][j]='X'
                count+=1
                while q:
                    r,c=q.popleft()
                    for dr,dc in mv:
                        nr,nc=r+dr,c+dc
                        if 0<=nr<n and 0<=nc<n and clr[nr][nc]=='G':
                            q.append((nr,nc))
                            clr[nr][nc]='X'
    for i in range(n):
        for j in range(n):
            if clr[i][j]=='B':
                q.append((i,j))
                clr[i][j]='X'
                count+=1
                while q:
                    r,c=q.popleft()
                    for dr,dc in mv:
                        nr,nc=r+dr,c+dc
                        if 0<=nr<n and 0<=nc<n and clr[nr][nc]=='B':
                            q.append((nr,nc))
                            clr[nr][nc]='X'
    print(count,end=' ')

n=int(input())
clr=[]
for _ in range(n):
    clr.append(list(input()))
clr2=copy.deepcopy(clr)
nonBlind()
redGreenColorBlind()