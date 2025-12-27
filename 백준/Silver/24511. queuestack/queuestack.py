from collections import deque
import sys
input=sys.stdin.readline

n=int(input())
dataStructure=list(map(int,input().split()))
num=list(map(int,input().split()))
apn=int(input())
apnum=list(map(int,input().split()))
q=deque([])
for i in range(n):
    if dataStructure[i]!=1:
        q.append(num[i])

for i in apnum:
    q.appendleft(i)
    popNum=q.pop()
    print(popNum,end=' ')