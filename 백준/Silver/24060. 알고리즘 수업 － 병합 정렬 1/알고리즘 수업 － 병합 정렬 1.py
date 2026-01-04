def merge_sort(ary):
    if len(ary) <= 1:
        return ary

    mid = (len(ary)+1) // 2
    left_half = ary[:mid]
    right_half = ary[mid:]

    sorted_left = merge_sort(left_half)
    sorted_right = merge_sort(right_half)

    return merge(sorted_left, sorted_right)

def merge(left, right):
    global order,count,ans
    result = []
    i = 0 
    j = 0 

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            if count==order-1:
                ans=left[i]
            result.append(left[i])
            count+=1
            i += 1
        else:
            if count==order-1:
                ans=right[j]
            result.append(right[j])
            count+=1
            j += 1
    
    while i < len(left):
        if count==order-1:
            ans=left[i]
        result.append(left[i])
        count+=1
        i += 1
    
    while j < len(right):
        if count==order-1:
            ans=right[j]
        result.append(right[j])
        count+=1
        j += 1
    return result

nums,order=map(int,input().split())
count,ans=0,-1
a=list(map(int,input().split()))
merge_sort(a)
print(ans)
