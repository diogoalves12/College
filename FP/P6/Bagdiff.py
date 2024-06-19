def bagdiff(xs,ys):
    result = []
    for i in xs:
        if i in ys:
            ys.remove(i)
        else:
            result.append(i)
    return result

print(bagdiff([5, 7, 11, 11, 11, 12, 13], [7, 8, 11]))