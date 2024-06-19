def complete_pairs(s1, s2) :
    res = set()
    alphabet_chars = set('abcdefghijklmnopqrstuvwxyz')
    for element1 in s1:
        for element2 in s2:
            juntar = (element1 + element2).lower()
            concatenation = sorted(set(juntar))
            if alphabet_chars.issubset(set(concatenation)):
                res.add(concatenation)

    return res




def complete_pairs(s1, s2):
    res = set()
    alphabet_chars = set('abcdefghijklmnopqrstuvwxyz')
    
    for element1 in s1:
        for element2 in s2:
            concatenation = (element1 + element2).lower()
            if alphabet_chars.issubset(set(concatenation)):
                res.add(concatenation)

    return res
