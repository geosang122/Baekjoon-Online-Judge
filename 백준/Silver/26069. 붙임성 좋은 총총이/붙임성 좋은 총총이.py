n=int(input())
dance=set()
dance.add('ChongChong')
for _ in range(n):
    n1,n2=input().split()
    if n1 in dance or n2 in dance:
        dance.add(n1)
        dance.add(n2)
print(len(dance))