m=[[0,1],
   [2,3]]
def z(n,r,c):
    if n==1:
        return m[r][c]
    l=2**(n-1)
    if r<l and c<l:
        return z(n-1,r,c)
    elif r<l and c>=l:
        return z(n-1,r,c-l)+l**2
    elif r>=l and c<l:
        return z(n-1,r-l,c)+2*l**2
    else:
        return z(n-1,r-l,c-l)+3*l**2

n,r,c=list(map(int,input().split()))
print(z(n,r,c))