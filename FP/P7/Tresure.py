def treasure(clues):
    atual = (0,0)
    while atual in clues:
        key = atual
        atual = clues[atual]
        del clues[key]
    return atual



    {(0, 0): (1, 0), (2, 1): (3, 5), (1, 0): (2, 1)}