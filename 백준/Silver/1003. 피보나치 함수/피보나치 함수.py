k=int(input())
for _ in range(k):
    n=int(input())
    if n==0:
        print("1 0")
    elif n==1:
        print("0 1")
    else:
        fib=[[0,0] for _ in range(n+1)]
        fib[0][0]=1
        fib[1][1]=1
        for i in range(2,n+1):
            fib[i][0]=fib[i-1][0]+fib[i-2][0]
            fib[i][1]=fib[i-1][1]+fib[i-2][1]
        print(fib[n][0],fib[n][1])