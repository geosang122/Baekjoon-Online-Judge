def count(n):
    for i in range(1,360):
        if (i*360)%n==0:
            return (i*360)//n
    return -1

n=int(input())
print(count(n))