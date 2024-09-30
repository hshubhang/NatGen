def proc_data(VAR_0):
    VAR_1 = 0
    for VAR_2 in range(len(VAR_0)):
        if VAR_2 % 2 == 0:
            VAR_1 += VAR_0[VAR_2] * 2
        else:
            VAR_1 += VAR_0[VAR_2] * 3
    return VAR_1
