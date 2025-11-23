import sys
input=sys.stdin.readline
n,t=map(int,input().split())
q=list(map(int,input().split()))
q1=sorted(q[:t])
q2=q[t:]
print(*q1,*q2)