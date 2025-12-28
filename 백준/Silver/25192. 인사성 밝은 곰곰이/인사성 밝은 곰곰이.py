n=int(input())
chat=set()
count=0
for _ in range(n):
    st=input()
    if st=='ENTER':
        chat.clear()
        continue
    if st in chat:
        pass
    else:
        count+=1
        chat.add(st)
print(count)