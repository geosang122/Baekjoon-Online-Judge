n=int(input())
num1=list(map(int,input().split()))
num1.sort()
num2=list(map(int,input().split()))
num2.sort(reverse=True)
sum=0
for i in range(n):
    sum+=(num1[i]*num2[i])
print(sum)