def check_latin(matrix):
    n = len(matrix)
    for row in matrix:
        assert n == len(row)
    
    symbols = set(matrix[0])
    if len(symbols) != n :
        return False
    for row in matrix[1:]:
        if set(row) != symbols:
            return False
    
    for j in range(n):
        a = set()
        for i in range(n):
            a.add(matrix[i][j])
        if a != symbols:
            return False
    return True
             

print(check_latin([[0,3,6,9],[3,3,9,6],[6,9,0,3],[9,6,3,0]]))