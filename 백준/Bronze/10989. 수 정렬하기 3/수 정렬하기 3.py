import sys
a=[0]*10001
n=int(sys.stdin.readline())
max=0
for i in range(n):
    temp=int(sys.stdin.readline())
    a[temp]+=1
    if max<temp:
        max=temp
for i in range(max+1):
    if a[i]!=0:
        for _ in range(a[i]):
            print(i)