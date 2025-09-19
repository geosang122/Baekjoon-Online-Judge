n=int(input())
p=set()
count=0
for _ in range(n):
    a,b=map(int,input().split())
    if a in p and b==1:
        count+=1
    elif a in p and b==0:
        p.remove(a)
    elif a not in p and b==1:
        p.add(a)
    else:
        count+=1
count+=len(p)
print(count)
