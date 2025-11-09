n=int(input())
ary=[]
numList=[]
ans=[]
for _ in range(n):
    ary.append(int(input()))
idx,i=0,1
while(True):
    numList.append(i)
    i+=1
    ans.append('+')
    while idx<len(ary) and len(numList)!=0 and ary[idx]==numList[-1]:
        ans.append('-')
        idx+=1
        numList.pop()
    if i==n+1 and len(numList)==0:
        print('\n'.join(ans))
        break
    elif i==n+1 and len(numList)!=0:
        print('NO')
        break