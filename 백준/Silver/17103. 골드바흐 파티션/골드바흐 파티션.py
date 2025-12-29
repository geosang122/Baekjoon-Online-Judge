n=1000000
a=[False,False]+[True]*(n-1)
primes=[]

for i in range(2,n+1):
    if a[i]:
        primes.append(i)
        for j in range(i*2,n+1,i):
            a[j]=False

k=int(input())
for _ in range(k):
    count=0
    num=int(input())
    for i in range(len(primes)):
        if primes[i]>=num:
            break
        if primes[i]<=num//2 and a[num-primes[i]]==True:
            count+=1
    print(count)