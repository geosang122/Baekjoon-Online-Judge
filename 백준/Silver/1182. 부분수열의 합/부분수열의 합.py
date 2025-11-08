def bt(k):
    global count
    if len(ary)>0 and sum(ary)==s:
        count+=1
    if k==n:
        return
    for i in range(k,n): 
        ary.append(num[i])
        bt(i+1)
        ary.pop()

count=0
n,s=map(int,input().split())
num=list(map(int,input().split()))
ary=[]
bt(0)
print(count)