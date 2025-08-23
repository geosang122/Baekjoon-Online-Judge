n=int(input())
string=input()
sum=0
for i in range (n):
    sum+=(ord(string[i])-ord('a')+1)*31**i
print(sum%1234567891)