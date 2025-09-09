def fac(n):
    if n<=1:
        return 1
    else:
        return n*fac(n-1)
n=int(input())
for _ in range(n):
    x,y=map(int,input().split())
    if x>y//2:
        x=y-x
    ans=fac(y)//fac(x)//fac(y-x)
    print(ans)