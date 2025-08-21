numbers=input()
digit=list(numbers)
digits=[int(digit) for digit in numbers]
digits.sort(reverse=True)
n=len(numbers)
for i in range (n):
    print(digits[i],end='')