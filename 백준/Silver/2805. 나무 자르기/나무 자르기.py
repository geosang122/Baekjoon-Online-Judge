n,m=map(int,input().split())
tree=list(map(int,input().split()))
h1=0
h2=max(tree)
while h1<=h2:
    half=(h1+h2)//2
    total=sum(t-half for t in tree if t>half)
    if total<m:
        h2=half-1
    else:
        result=half
        h1=half+1

print(result)