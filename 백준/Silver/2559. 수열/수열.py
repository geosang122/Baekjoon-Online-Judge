n,k=map(int,input().split())
a=list(map(int,input().split()))
sum=0
for i in range(k):
    sum+=a[i]
max=sum
for j in range(1,n-k+1):
    sum=sum-a[j-1]+a[j+k-1]
    if sum>max:
        max=sum
print(max)