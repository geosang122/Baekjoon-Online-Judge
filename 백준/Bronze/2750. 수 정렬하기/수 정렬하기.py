numbers=[]
n=int(input())
for i in range(n):
    numbers.append(int(input()))

numbers.sort()
for i in range(n):
    print(numbers[i])