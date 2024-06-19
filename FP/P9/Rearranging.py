def rearrange(l):
    positivos = [x for x in l if (lambda x: x > 0 )(x)]
    negativos = [x for x in l if (lambda x: x <= 0 )(x)]
    res = []
    negativos.extend(positivos)
    return negativos


#OU 


def rearrange(l):
    positivos = list(filter(lambda x: x>0,l))
    negativos = list(filter(lambda x: x<=0,l))
    negativos.extend(positivos)
    return negativos