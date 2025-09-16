n=int(input())
flag=0
for i in range(max(n-9*18,0),n):
    sum=0
    j=i
    while(j>0):
        sum+=j%10
        j//=10
    if sum+i==n:
        print(i)
        flag=1
        break;
if flag==0:
    print(0)