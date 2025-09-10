n=int(input())
m=input()
length=len(m)
m_list=list(m)
for i in range(n-1):
    a=input()
    for w in range(length):
        if m_list[w]!=a[w]:
            m_list[w]='?'
result=''.join(m_list)
print(result)