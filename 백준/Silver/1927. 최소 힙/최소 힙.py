#최소힙 구현
import sys
input=sys.stdin.readline

heap=[0]

def push(x):
    heap.append(x)
    l=len(heap)-1
    while l//2>0 and heap[l//2]>heap[l]:
        heap[l//2],heap[l]=heap[l],heap[l//2]
        l//=2

def pop(): #최솟값 제거
    l=len(heap)-1
    heap[1],heap[l]=heap[l],heap[1]

    min_val=heap.pop()
    print(min_val)

    k=1
    while 2*k<len(heap):
        left_idx=k*2
        right_idx=k*2+1
        smallest=left_idx #왼쪽 가정
        if right_idx<len(heap) and heap[left_idx]>heap[right_idx]:
            #오른쪽 노드가 있고, 왼쪽보다 값이 작으면
            smallest=right_idx
            #오른쪽 인덱스를 최솟값 노드로 변경
        if heap[k]>heap[smallest]:
            heap[k],heap[smallest]=heap[smallest],heap[k]
            k=smallest
        else:
            break

n=int(input())
for _ in range(n):
    x=int(input())
    if x==0 and len(heap)==1:
        print(0)
    elif x==0:
        pop()
    else:
        push(x)
