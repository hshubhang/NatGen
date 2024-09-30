i = 0
while i < len(matrix):
    j = 0
    while len(matrix[i] > j):
        process(matrix[i][j])
        j += 1
    i += 1