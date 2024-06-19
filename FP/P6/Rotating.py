def rotate_list(l):
    a = []
    if len(l) < 3:
        return l 
    else:
        a.append(l[0])
        a.append(l[1])
        a.append(l[2])
        
        del l[0]
        del l[0]
        del l[0]
        return l+a

print(rotate_list([1,2,3,4,5,6]))
