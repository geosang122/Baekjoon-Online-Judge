n=int(input())
d=[0]*(n+1)
d[1]=d[2]=1
for i in range(3,n+1):
    d[i]=d[i-2]+d[i-1]
fb=d[n]
print(fb,n-2,sep=' ')