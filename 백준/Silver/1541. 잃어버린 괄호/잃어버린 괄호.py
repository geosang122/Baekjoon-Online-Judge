import re

expression = input()

# 1. 숫지만 추출
numbers = re.findall(r'\d+', expression)
numbs=list(map(int, numbers))

# 2. 연산자만 추출
op = re.findall(r'[+-]', expression)

total=numbs[0]
flag=0
for i in range(1,len(numbs)):
    if flag==1:
        total-=numbs[i]
    else:
        if op[i-1]=='-':
            total-=numbs[i]
            flag=1
        else:
            total+=numbs[i]
print(total)