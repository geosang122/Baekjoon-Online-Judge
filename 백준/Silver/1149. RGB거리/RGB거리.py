n=int(input())
t=[[0]*3 for _ in range(n+1)]
house=list()
house.append([0,0,0])
for _ in range(n):
    house.append(list(map(int,input().split())))
t[1][0]=house[1][0]
t[1][1]=house[1][1]
t[1][2]=house[1][2]
for i in range(2,n+1):
    t[i][0]=min(t[i-1][1],t[i-1][2])+house[i][0]
    t[i][1]=min(t[i-1][0],t[i-1][2])+house[i][1]
    t[i][2]=min(t[i-1][1],t[i-1][0])+house[i][2]
print(min(t[n][0],t[n][1],t[n][2]))