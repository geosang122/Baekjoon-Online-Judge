h,w=map(int,input().split())
height=list(map(int,input().split())) #w개
rain=0
for i in range(1,w):
    left_max,right_max=0,0
    for j in range(i):
        if height[j]>left_max:
            left_max=height[j]
    for j in range(i+1,w):
        if height[j]>right_max:
            right_max=height[j]
    mini_h=min(left_max,right_max)
    if mini_h-height[i]>0:
        rain+=(mini_h-height[i])
print(rain)