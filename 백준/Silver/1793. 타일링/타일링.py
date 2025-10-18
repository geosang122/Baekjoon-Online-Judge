import sys
d=[0]*251
d[0]=1
d[1]=1
d[2]=3
for j in range(3,251):
    d[j]=d[j-1]+d[j-2]*2
num =sys.stdin.readlines()
for n in num:
    a=int(n)
    print(d[a])