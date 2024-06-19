def dogs(h_age):
    d_age = 0
    if h_age <= 2 :
        d_age = 10.5 * h_age 
    elif h_age > 2 :
        h_age = h_age - 2
        d_age = 10.5 * 2
        d_age += 4 * h_age
    return d_age       

