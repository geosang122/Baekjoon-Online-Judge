def func():
    global cnt
    if len(ary1)==n:
        cnt+=1
        return

    for i in range(1,n+1):
        k=len(ary1)+1-i
        l=len(ary1)+1+i
        if  (k not in ary1) and (i not in ary2) and (l not in ary3):
            ary1.append(k)
            ary2.append(i)
            ary3.append(l)
            func()
            ary1.pop()
            ary2.pop()
            ary3.pop()
n=int(input())
ary1=[]
ary2=[]
ary3=[]
cnt=0
func()
print(cnt)