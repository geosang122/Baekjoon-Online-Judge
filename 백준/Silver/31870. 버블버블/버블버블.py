import copy

ascCount=0
descCount=0

def ascBub(n):
    global ascCount
    for i in range(n):
        for j in range(n-i-1):
            if ascList[j]>ascList[j+1]:
                ascList[j],ascList[j+1]=ascList[j+1],ascList[j]
                ascCount+=1

def descBub(n):
    global descCount
    for i in range(n):
        for j in range(n-i-1):
            if descList[j]<descList[j+1]:
                descList[j],descList[j+1]=descList[j+1],descList[j]
                descCount+=1

n=int(input())
a=list(map(int,input().split()))
ascList=copy.deepcopy(a)
descList=copy.deepcopy(a)
ascBub(n)
descBub(n)
print(min(ascCount,descCount+1))