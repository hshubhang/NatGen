def calculate(x):
    if x == 1:
        return 1
    else:
        a = x * calculate(x - 1)
        return a

num = 5
result = calculate(num)
print("The factorial of", num, "is", result)
