import sys 
input=sys.stdin.readline

s=input()
alpha=dict()
for idx, c in enumerate(s):
    if c in alpha:
        alpha[c].append(idx)
    else:
        alpha[c]=[idx]
k=int(input())
for _ in range(k):
    q=input().split()
    ch=q[0]
    r,l=int(q[1]),int(q[2])
    chlist=alpha.get(ch)
    count=0
    if chlist:
        for j in chlist:
            if r<=j<=l:
                count+=1
    print(count)