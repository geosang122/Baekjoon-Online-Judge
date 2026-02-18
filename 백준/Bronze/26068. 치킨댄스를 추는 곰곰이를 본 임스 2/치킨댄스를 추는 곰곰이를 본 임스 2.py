count=0
n=int(input())
for _ in range(n):
    s=input()
    day=int(s[2:])
    if day<=90:
        count+=1
print(count)