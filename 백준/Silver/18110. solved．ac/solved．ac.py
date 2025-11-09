n=int(input())
if n==0:
    print(0)
else:
    a=[]
    for _ in range(n):
        a.append(int(input()))
    a.sort()
    k=(int)(0.5+n*0.15)
    if k==0:
        print((int)(0.5+sum(a)/n))
    else:
        score=sum(a[k:-k])/(n-2*k)
        print((int)(score+0.5))