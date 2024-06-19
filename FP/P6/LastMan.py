def last_man_standing(list:list, step:int):
    remover = -1
    while len(list) > 1: 
        remover = (remover + step) % len(list)
        list.pop(remover)
        remover -= 1
    return list[0]


print(last_man_standing([0.5, -2, 10, 5, 8.9, 10, 20, 10], 3))