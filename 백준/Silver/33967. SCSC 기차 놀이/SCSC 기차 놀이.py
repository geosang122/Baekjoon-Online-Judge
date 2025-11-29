score=int(input())-1
s=input()
st=list(s)
for i in range(1,len(st)):
    if st[i-1]==st[i]=='2':
        score+=1
    elif st[i-1]==st[i]=='5':
        score+=1
    if st[i]=='[' and st[i-1]==']':
        score-=1
print(score)