def bt():
    if len(ary)==m:
        print(' '.join(map(str,ary)))
        return
    for i in range(1,n+1):
        ary.append(i)
        bt()
        ary.pop()
n,m=map(int,input().split())
ary=[]
bt()