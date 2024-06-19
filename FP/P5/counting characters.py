import string

def count_chars(a_string) :
    alpha_count = 0
    digit_count = 0
    special_count = 0

    for i in a_string:
        if i in string.ascii_letters:
            alpha_count += 1
        if i in string.digits :
            digit_count += 1
        if i in string.punctuation :
            special_count += 1
    return alpha_count, digit_count, special_count



