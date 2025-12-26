from collections import deque

n=int(input())
a=list(map(int,input().split()))
q=deque([])
for i in range(1,n+1):
    q.append((i,a[i-1]))
while q:
    num,cmd=q.popleft()
    print(num,end=' ')
    if not q:
        break
    if cmd>0:
        for _ in range(cmd-1):
            q.append(q.popleft())
    else:
        for _ in range((cmd*-1)):
            q.appendleft(q.pop())