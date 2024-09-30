i = 0
while i < len(matrix):
    j = 0
    while j < len(matrix[i]):
        process(matrix[i][j])
        j += 1
    i += 1