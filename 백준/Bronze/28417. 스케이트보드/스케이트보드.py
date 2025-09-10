n=int(input())
max_score=0
for _ in range(n):
    a=list(map(int,input().split()))
    score_a=a[0] if a[0]>a[1] else a[1]
    trick_a=sorted(a[2:], reverse=True)
    score_a+=trick_a[0]+trick_a[1]
    if score_a>max_score:
        max_score=score_a
print(max_score)