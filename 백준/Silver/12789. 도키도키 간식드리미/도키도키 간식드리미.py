from collections import deque

n=int(input())
q1=deque(map(int,input().split()))
q2=deque([])
target=1

while q1:
    if q1[0]==target:
        q1.popleft()
        target+=1
    elif q2 and q2[-1]==target:
        q2.pop()
        target+=1
    else:
        q2.append(q1.popleft())

while q2 and q2[-1]==target:
    q2.pop()
    target+=1

if target==n+1:
    print('Nice')
else:
    print('Sad')