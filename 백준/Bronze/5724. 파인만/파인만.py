while True:
    count=0
    n=int(input())
    if n==0:
        break
    count=0
    for i in range(1,n+1):
        count+=(n+1-i)**2
    print(count)