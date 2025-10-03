n=int(input())
min_oper=[0]*(n+1)
pre=[0]*(n+1)

for i in range(2,n+1):
    min_oper[i]=min_oper[i-1]+1
    pre[i]=i-1
    if i%2==0 and min_oper[i]>min_oper[i//2]:
        min_oper[i]=min_oper[i//2]+1
        pre[i]=i//2
    if i%3==0 and min_oper[i]>min_oper[i//3]:
        min_oper[i]=min_oper[i//3]+1
        pre[i]=i//3
print(min_oper[n])
while(1):
    if n==1:
        print(1,end=' ')
        break;
    print(n,end=' ')
    n=pre[n]