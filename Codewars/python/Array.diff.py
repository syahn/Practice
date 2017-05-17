// 1. Reflection

# - Solved. 

// 2. Problem

# Your goal in this kata is to implement an difference function, which subtracts one list from another.

# It should remove all values from list a, which are present in list b.

# array_diff([1,2],[1]) == [2]
# If a value is present in b, all of its occurrences must be removed from the other:

# array_diff([1,2,2,2,3],[2]) == [1,3]

// 3. Initial solution( complexity: time=>O() space=>O())

def array_diff(a, b):
    return [num for num in a if num not in b]

// 4. Improved solution( complexity: time=>O() space=>O() )
