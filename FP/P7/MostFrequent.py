def most_frequent(alist):
    a = {}
    for j in alist:
        counter = 0
        for i in alist:
            if j == i:
                counter += 1
        
        a[j] = counter 

    mfe = max(a, key=lambda k:(a[k],k))
    
    return mfe
