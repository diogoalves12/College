def prime(i):
    if i < 2:
        return False
    for x in range(2, int(i**0.5) + 1):
        if i % x == 0:
            return False
    return True


def get_composites(n):
    for i in range(4,n + 1):
        if not prime(i):
            yield i 