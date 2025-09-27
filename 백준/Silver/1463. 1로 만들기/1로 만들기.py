n=int(input())
min_operation=[0]*(n+1)
min_operation[1]=0
for i in range(2,n+1):
    min_operation[i]=min_operation[i-1]+1
    if i%2==0:
        min_operation[i]=min(min_operation[i],min_operation[i//2]+1)
    if i%3==0:
        min_operation[i]=min(min_operation[i],min_operation[i//3]+1)
print(min_operation[n])