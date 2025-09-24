r=int(input())
for _ in range(r):
    cmd=input()
    max=int(input())
    n_str=input().strip('[]')
    if n_str:
        n=list(map(int,n_str.split(',')))
    else:
        n=[]
    flag=1
    for i in cmd:
        if i=='R':
          flag*=-1
        else:
            if max<=0:
                max-=1
                break
            elif flag==-1:
                del n[max-1]
            elif flag==1:
                del n[0]
            max-=1
    if max==0:
        print('[]')
    elif max<0:
        print('error')
    else:
        if flag==1:
            output=f"[{','.join(map(str,n))}]"
        else:
            output=f"[{','.join(map(str,n[::-1]))}]"
        print(output)