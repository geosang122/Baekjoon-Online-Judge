n=int(input())
time=[]
for _ in range(n):
    time.append(tuple(map(int,input().split())))
time.sort(key=lambda x:(x[1],x[0]))
lastend=0
count=0
for start,end in time:
    if start>=lastend:
        count+=1
        lastend=end
print(count)