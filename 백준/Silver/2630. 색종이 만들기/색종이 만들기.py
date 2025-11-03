def p(k,r,c):
    global count_b
    global count_w
    ans=pp[r][c]
    for i in range(r,r+k):
        for j in range(c,c+k):
            if pp[i][j]!=ans:
                return p(k//2,r,c),p(k//2,r+k//2,c),p(k//2,r+k//2,c+k//2),p(k//2,r,c+k//2)
    if ans==1:
        count_b+=1
    elif ans==0:
        count_w+=1
n=int(input())
pp=[]
for i in range(n):
    pp.append(list(map(int,input().split())))
count_w=0
count_b=0
p(n,0,0)
print(count_w)
print(count_b)
