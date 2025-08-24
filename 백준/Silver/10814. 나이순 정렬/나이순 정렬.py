p=[]
n=int(input())
for i in range (n):
    age,name=input().split()
    age=int(age)
    p.append((age,name))
sorted_p=sorted(p,key=lambda x:x[0])
for age,name in sorted_p:
    print(age, name)