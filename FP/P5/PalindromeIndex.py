def is_palindrome(string):
    return string == string[::-1]

def palindrome_index(s):
    length = len(s)
    
    for i in range(length // 2):
        if s[i] != s[length - 1 - i]:
            if is_palindrome(s[:i] + s[i + 1:]):
                return i
            elif is_palindrome(s[:length - 1 - i] + s[length - i:]):
                return length - 1 - i

    return -1

# Exemplo de uso:
s = "abca"
resultado = palindrome_index(s)
print(resultado)