def repeated_letter(s):
    for char in s:
        if s.count(char) > 1:
            return char

