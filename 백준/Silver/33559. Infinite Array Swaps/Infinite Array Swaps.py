n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a_dic=dict()
b_dic=dict()
sum=0
b_ans=list()
a_ans=list()

for i in a:
    if i in a_dic:
        a_dic[i]+=1
    else:
        a_dic[i]=1    

for i in b:
    if i in b_dic:
        b_dic[i]+=1
    else:
        b_dic[i]=1    

for k,v in a_dic.items():
    if k in b_dic:
        m=min(v,b_dic[k])
        b_dic[k]-=m
        a_dic[k]-=m
        sum+=m
        a_ans.extend([k]*m)
        b_ans.extend([k]*m)
for k,v in a_dic.items():
    if v!=0:
        a_ans.extend([k]*v)
for k,v in b_dic.items():
    if v!=0:
        b_ans.extend([k]*v)
print(sum)
for i in a_ans:
    print(i,end=' ')
print()
for j in b_ans:
    print(j,end=' ')