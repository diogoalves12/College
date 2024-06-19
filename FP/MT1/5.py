def xmiddle_square(number, digits, iterations):
    for i in range(iterations):
        number = next_var(number,digits)
    return number

def next_var(number, digits):
    """Compute the next pseudo-random using the variant square algorithm."""
    k = digits // 2
    square = number*number
    part1 = square % (10**k)
    part2 = square // (10**(digits+k))
    xmiddle = part2*10**k + part1
    return xmiddle    

print(xmiddle_square(94, 2, 150))