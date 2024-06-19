def  dict_to_tuple(enrolls):
    com = []
    sem = []
    for aluno,cadeiras in enrolls.items():
        if not cadeiras == []:
            for i in range(len(cadeiras)):
                a = (aluno,cadeiras[i]) 
                com.append(a)
        else:
            a = [aluno]
            sem.append(a)
    return (com,sem)
print(dict_to_tuple({"up123": ["FP", "MD"], "up103": [], "up113": ["FP"]}))
print(dict_to_tuple({"up123": [], "up103": [], "up113": []}))
print(dict_to_tuple({}))
print(dict_to_tuple({"up123": ["FP", "FSC"]}))
print(dict_to_tuple({"up123": ["FP"], "up103": ["MD"], "up113": ["FP"]}))