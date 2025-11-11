n,k=map(int,input().split())
a=[]
count=0
for _ in range(n):
    a.insert(0,int(input()))
for i in a:
    if k//i>0:
        count+=(k//i)
        k%=i
        if k==0:
            break
print(count)