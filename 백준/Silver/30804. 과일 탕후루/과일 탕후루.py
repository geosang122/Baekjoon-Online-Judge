import sys
input=sys.stdin.readline

n=int(input())
f=list(map(int,input().split()))
nums={}
l=0
count=0
for r in range(n):
    r_value=f[r]
    nums[r_value]=nums.get(r_value,0)+1
    while len(nums) >2:
        l_value=f[l]
        nums[l_value]-=1
        if nums[l_value]==0:
            del nums[l_value]
        l+=1
    if count<r-l+1:
        count=r-l+1
print(count) 