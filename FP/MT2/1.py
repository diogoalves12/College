def  rgb_to_grayscale(r, g, b):
    formula = 0.299 *(r/255) + 0.587 *g/255 + 0.144 *b/255
    if not 0<=r<=255 and 0<=g<=255 and 0<=b<=255:
        return None
    return round(formula,3)
