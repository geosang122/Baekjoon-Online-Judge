n=int(input())
for _ in range(n):
    k=int(input())
    a=list(map(int,input().split()))
    b=list()
    w=1
    for i in range(k):
        if a[i]!=w:
            b.append(w)
        else:
            b.append(w+1)
        w=b[i]+1
    print(b[k-1])