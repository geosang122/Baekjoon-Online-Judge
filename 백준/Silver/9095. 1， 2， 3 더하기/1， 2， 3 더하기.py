rp=int(input())
for _ in range(rp):
    n=int(input())
    if n==1:
        print(1)
    elif n==2:
        print(2)
    elif n==3:
        print(4)
    else:
        min_operation=[0]*(n+1)
        min_operation[1]=1
        min_operation[2]=2
        min_operation[3]=4
        for i in range(4,n+1):
            min_operation[i]=min_operation[i-3]+min_operation[i-2]+min_operation[i-1]
        print(min_operation[n])