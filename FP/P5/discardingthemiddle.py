def discard_middle(s):
    res = ""
    if len(s) <= 3:
        return ""
    elif len(s) > 3 :
        return (s[0:2] + s[len(s)-2:len(s)])

    