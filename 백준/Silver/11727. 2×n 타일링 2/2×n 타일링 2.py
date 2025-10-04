n=int(input())
if n==1:
    print(1)
elif n==2:
    print(3)
else:
    a=[[0,0,0] for _ in range(n+1)]
    a[1][1]=1
    a[1][2]=0
    a[2][1]=1
    a[2][2]=2
    for i in range(3,n+1):
        a[i][1]=a[i-1][1]+a[i-1][2]
        a[i][2]=(a[i-2][1]+a[i-2][2])*2
    print((a[n][1]+a[n][2])%10007)