# Reflection

# - solved. 
# - prev flag is clever

# Problem

# Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

# For example:

# unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
# unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
# unique_in_order([1,2,2,3,3])       == [1,2,3]

# Initial solution( complexity: time=>O() space=>O())

def unique_in_order(iter):
    arr = list(iter)
    i, j = 0, 0
    n = len(arr)
    ret = []
    while i < n:
        ret.append(arr[i])
        j = i + 1
        while j < n and arr[j] == arr[i]:
            j += 1
        i = j
    return ret


# Improved solution( complexity: time=>O() space=>O() )

def unique_in_order(iterable):
    result = []
    prev = None
    for char in iterable[0:]:
        if char != prev:
            result.append(char)
            prev = char
    return result