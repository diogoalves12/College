def subsequences(string):
    if string == "":
        return [""]
    else:
        res = subsequences(string[1:])
        r = []
        r.extend(res)
        for i in res:
            r.append(string[0] + i)
        return r

rint(sorted(subsequences("abc")))
#['', 'a', 'ab', 'abc', 'ac', 'b', 'bc', 'c']