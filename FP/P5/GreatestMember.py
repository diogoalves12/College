def greatest_member(a_tuple):
    def calcular_pontuacao(s):
        return sum([ord(char) for char in s])

    def processar_tupla(t):
        sub_total = 0
        for elemento in t:
            if type(elemento) == str:
                sub_total += calcular_pontuacao(elemento)
            else:
                sub_total += processar_tupla(elemento)
        return sub_total

    pontuacoes = []
    for elemento in a_tuple:
        if type(elemento) == str:
            pontuacoes.append(calcular_pontuacao(elemento))
        else:
            pontuacoes.append(processar_tupla(elemento))

    return a_tuple[pontuacoes.index(max(pontuacoes))]
