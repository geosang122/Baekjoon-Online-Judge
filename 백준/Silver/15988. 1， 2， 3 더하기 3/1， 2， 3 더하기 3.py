k=int(input())
a=[]
for _ in range(k):
    a.append(int(input()))
max_a=max(a)
d=[0 for _ in range(max_a+1)]
d[1]=1
d[2]=2
d[3]=4
for i in range(4,max_a+1):
    d[i]=(d[i-3]+d[i-2]+d[i-1])%1000000009
for j in a:
    print(d[j]%1000000009)