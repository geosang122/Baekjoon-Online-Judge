def bt():
    if len(ary)==m:
        print(' '.join(map(str,ary)))
        return

    for i in range(0,n):
        if num[i] not in ary:
            ary.append(num[i])
            bt()
            ary.pop()

n,m=map(int,input().split())
num=sorted(list(map(int,input().split())))
ary=[]
bt()