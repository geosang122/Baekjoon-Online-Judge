import sys
from bisect import bisect_left, bisect_right

input = sys.stdin.readline

s=input()
alpha=dict()
for idx, c in enumerate(s):
    if c in alpha:
        alpha[c].append(idx)
    else:
        alpha[c]=[idx]
k=int(input())
for _ in range(k):
    q=input().split()
    ch=q[0]
    r,l=int(q[1]),int(q[2])
    chlist=alpha.get(ch,[])
    if chlist:
        left_idx = bisect_left(chlist, r)
        right_idx = bisect_right(chlist, l)
        print(right_idx - left_idx)
    else:
        print(0)