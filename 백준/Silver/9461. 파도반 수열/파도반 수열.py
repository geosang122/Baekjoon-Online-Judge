k=int(input())
p=[0,1,1,1,2,2]
for i in range(6,100+1):
    p.append(p[i-1]+p[i-5])
for _ in range(k):
    n=int(input())
    print(p[n])