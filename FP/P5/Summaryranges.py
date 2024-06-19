def summary_ranges(a_string):
    lst = list(map(int,list(a_string.split(","))))
  
    res = []
    start = lst[0]
    end = lst[0]
    
    for i,numero in enumerate(lst[1:]):
        if abs(lst[i] - lst[i + 1]) == 1:
            end = numero 
        else:
            if start == end:
                res.append(str(start))
            else :
                res.append(f"{start}->{end}")
            
            start = end = numero 
    
    if start == end:
        res.append(str(start))
    else:
        res.append(f"{start}->{end}")
    
    resultado = ",".join(res)

    return resultado            
            




print(summary_ranges('0,1,2,3,4,5,7,10,11,20,21'))












