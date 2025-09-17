w=int(input())
for _ in range(w):
    k,m,l=map(int,input().split())
    mini=m
    a=list(map(int,input().split()))
    for i in a:
        if 0<=i<mini:
            mini=i
    remain=(m-mini) if (m-mini)>l else l
    if remain==1:
        print("The scoreboard has been frozen with 1 minute remaining.")
    else:
        print(f'The scoreboard has been frozen with {remain} minutes remaining.')
