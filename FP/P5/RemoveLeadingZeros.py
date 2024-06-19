def remove_leading(ip):
    res = []
    separado =ip.split( "." )
    for x in separado:
        res.append(str(int(x)))
    return ".".join(res)
