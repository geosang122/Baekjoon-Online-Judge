def flag(n,r,c):
    ans=sq[r][c]
    for i in range(r,r+n):
        for j in range(c,c+n):
            if ans!=sq[i][j]:
                return -1
    return ans
def quad(n,r,c):    
    if flag(n,r,c)==0:
        print('0',end='')
    elif flag(n,r,c)==1:
        print('1',end='')
    else:
        print('(',end='') 
        half=n//2
        quad(half,r,c)
        quad(half,r,c+half)
        quad(half,r+half,c)
        quad(half,r+half,c+half)
        print(')',end='')

n=int(input())
sq=[]
for _ in range(n):
    a=[]
    st=input()
    for i in st:
        a.append(int(i))
    sq.append(a)
quad(n,0,0)
