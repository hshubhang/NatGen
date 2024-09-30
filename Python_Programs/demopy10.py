def append_based_on_condition(input_str, condition):
    if condition == 1:
        result = input_str + " - Condition1"
    else:
        result = input_str + " - OtherCondition"
    return result

modified_str = append_based_on_condition("SampleString", 1)
print(f"Modified String: {modified_str}")
