def proc_data ( data ) :
    result = 0
    for i in range ( len ( data ) ):
        if i % 2 == 0:
            result += data[i] * 2
        else:
            result += data[i] * 3
    return result
