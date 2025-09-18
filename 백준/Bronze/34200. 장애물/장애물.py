import sys

n=int(input())
a=list(map(int,input().split()))
b=[0,]
sum=0
b.append(a[0])
flag=0
dist=a[0]+1
sum+=dist//2
sum+=dist%2
for i in range(1,n):
    dist=a[i]-a[i-1]
    b.append(dist)
    sum+=dist//2
    sum+=dist%2
    if dist==1:
        flag=1
if(flag==1):
    print(-1)
else:
    print(sum)