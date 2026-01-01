n=int(input())
num=list()
for _ in range(n):
    a=int(input())
    num.append(a)
num.sort(reverse=True)
max=num[0]
for i in range(1,len(num)):
    temp=num[i]*(i+1)
    if temp>max:
        max=temp
print(max)