import sys
input=sys.stdin.readline

def dfs(depth,total,pls,mis,mul,div):
    global maxi,mini
    if depth==n:
        if maxi<total:
            maxi=total
        if mini>total:
            mini=total
        return

    if pls:
        dfs(depth+1,total+a[depth],pls-1,mis,mul,div)
    if mis:
        dfs(depth+1,total-a[depth],pls,mis-1,mul,div)
    if mul:
        dfs(depth+1,total*a[depth],pls,mis,mul-1,div)
    if div:
        dfs(depth+1,int(total/a[depth]),pls,mis,mul,div-1)

maxi = -1000000001 
mini = 1000000001

n=int(input())
a=list(map(int,input().split()))
op=list(map(int,input().split())) #(+), (-), (×), (÷)

dfs(1,a[0],op[0],op[1],op[2],op[3])
print(maxi)
print(mini)