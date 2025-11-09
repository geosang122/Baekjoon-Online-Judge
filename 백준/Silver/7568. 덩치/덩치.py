n=int(input())
pp=[]
for _ in range(n):
    temp_list=list(map(int,input().split()))
    temp_list.append(1)
    pp.append(temp_list)

for i in range(n):
    for j in range(n):
        if pp[i][0]>pp[j][0] and pp[i][1]>pp[j][1]:
            pp[j][2]+=1

for i in range(n):
    print(pp[i][2],end=' ')