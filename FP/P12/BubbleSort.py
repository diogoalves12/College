def bubble_sort(alist):
    a =  True 
    while a:
        a = False
        for i in range(len(alist) - 1):
            if alist[i] > alist[i + 1]:
                a = True
                temp = alist[i]
                alist[i] = alist[i + 1]
                alist[i + 1] = temp
    return alist


def bubble_sort(alist:list):
    flag = True
    while flag:
        flag = False
        for i in range(len(alist)-1):
            if alist[i] > alist[i+1]:
                flag = True
                alist[i+1], alist[i] = alist[i], alist[i+1]
    return alist