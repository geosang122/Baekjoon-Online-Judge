k,n=map(int,input().split())
sum=0
lan=list()
for i in range(k):
    length=int(input())
    sum+=length
    lan.append(length)
maxl=sum//n
minl=1
while minl<=maxl:
    half=(maxl+minl)//2
    count=0
    for k in lan:
        count+=k//half
    if count<n:
        maxl=half-1
    elif count>=n:
        minl=half+1
print(maxl)