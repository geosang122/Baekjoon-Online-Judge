def score(a):
    global n
    count=0
    for _ in range(len(str(n))//2):
        count+=(a%10)
        a//=10
    return count

n=int(input())
div=10**(len(str(n))//2)
front,back=n//div,n%div
if score(front)==score(back):
    print('LUCKY')
else:
    print('READY')
