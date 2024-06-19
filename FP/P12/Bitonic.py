def bitonic_point(f):
    lst = f()
    low,top = 0,len(lst) - 1  #indices

    while low <= top:
        mid = (low + top) // 2
            
        if lst[mid - 1] < lst[mid] > lst[mid + 1]:
            return lst[mid] 
        elif lst[mid - 1] < lst[mid] < lst[mid + 1]:
            low = mid + 1
        else:
            top = mid - 1
    return -1
   
    
    
print(bitonic_point(lambda: [2, 6, 10, 25, 60, 30, 25, 10, 0]))


