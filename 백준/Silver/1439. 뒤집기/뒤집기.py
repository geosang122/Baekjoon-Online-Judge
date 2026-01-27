n=input()
count=[0,0]
last=2
for a in n:
    if a==last:
        pass
    else:
        count[int(a)]+=1
    last=a
print(min(count))