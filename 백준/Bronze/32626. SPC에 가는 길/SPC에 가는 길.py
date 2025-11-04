sx,sy=map(int,input().split())
ex,ey=map(int,input().split())
px,py=map(int,input().split())
count=1
if sx==ex==px and max(sy,ey)>py>min(sy,ey) or sy==ey==py and max(sx,ex)>px>min(sx,ex):
    count+=1
elif sx==ex or sy==ey:
    count-=1
print(count)