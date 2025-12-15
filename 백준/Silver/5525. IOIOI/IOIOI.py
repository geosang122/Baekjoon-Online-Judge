n=int(input())
k=int(input())
ans=input()
answer,count,i=0,0,0

while i<=k-3:
    if ans[i:i+3]=='IOI':
        i+=2
        count+=1
        if count>=n:
            answer+=1
    else:
        count=0
        i+=1
        
print(answer)