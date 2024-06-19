def days_until_christmas(date) :
    days_of_month = {
    1: 31,
    2: 28,
    3: 31,
    4: 30,
    5: 31,
    6: 30,
    7: 31,
    8: 31,
    9: 30,
    10: 31,
    11: 30,
    12: 31 }

    d,m,a = date
    dias_que_faltam = 0

    if m == 12 and d > 25 :
        dias_que_faltam = 31 - d + 359
        return dias_que_faltam
    elif m == 12:
        dias_que_faltam = 25 - d
        return dias_que_faltam
    else:
        for mes in range(m,12):
            dias_que_faltam += days_of_month[mes]
        dias_que_faltam += 25 - d
    return dias_que_faltam 