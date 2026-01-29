chess=[[False for _ in range(6)] for _ in range(6)]
st=input()
r,c=st[0],st[1]
lastr=ord(r)-ord('A')
lastc=int(c)-1
firstr,firstc=lastr,lastc
chess[lastr][lastc]=True
valid=True
for _ in range(35):
    st=input()
    r,c=st[0],st[1]
    row=ord(r)-ord('A')
    col=int(c)-1
    if chess[row][col]==True:
        valid=False
    if abs(row-lastr)*abs(col-lastc)!=2:
        valid=False
    chess[row][col]=True
    lastr,lastc=row,col
if abs(firstr-lastr)*abs(firstc-lastc)!=2:
    valid=False
if valid:
    print('Valid')
else:
    print('Invalid')