def  lost_element(s1, s2): 
    for element in s1:
        if element not in s2:
            return element
    for element in s2:
        if element not in s1:
            return element

#diff = s1.symmetric_difference(s2) return diff.pop()
