locat=[(0,0),
       (0,1),
       (1,1),
       (1,0),
       (0,0),
       (0,1),
       (1,1)]
locat2=[(0,0),
        (1,0),
        (1,1),
        (0,1),
        (0,0),
        (1,0),
        (1,1)]
def is_clockwise():
    flag=0
    for i in range(4):
        r,c=locat[i]
        if a[r][c]=='H':
            r1,c1=locat[i+1]
            r2,c2=locat[i+2]
            r3,c3=locat[i+3]
            if a[r1][c1]=='E' and a[r2][c2]=='P' and a[r3][c3]=='C':
                flag=1
    return flag
        

def is_counter():
    flag=0
    for i in range(4):
        r,c=locat2[i]
        if a[r][c]=='H':
            r1,c1=locat2[i+1]
            r2,c2=locat2[i+2]
            r3,c3=locat2[i+3]
            if a[r1][c1]=='E' and a[r2][c2]=='P' and a[r3][c3]=='C':
                flag=1
    return flag

a=[]
a.append(list(input()))
a.append(list(input()))
if is_clockwise() or is_counter():
    print('YES')
else:
    print('NO')