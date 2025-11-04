def maxscore(l,r):
    global st
    max_score=0
    st_slice=st[l-1:r]
    for i in range(1,len(st_slice)):
        score=0
        st1=st_slice[:i][::-1]
        st2=st_slice[i:]
        length=min(len(st1),len(st2))
        for j in range(length):
            if st1[j]==st2[j]:
                score+=1
        if score>max_score:
            max_score=score
    return max_score

a=int(input())
st=input()
repeat=int(input())
for _ in range(repeat):
    l,r=map(int,input().split())
    print(maxscore(l,r))