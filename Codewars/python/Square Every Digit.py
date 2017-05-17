// 1. Reflection

# - solved

// 2. Problem

# Welcome. In this kata, you are asked to square every digit of a number.

# For example, if we run 9119 through the function, 811181 will come out.

# Note: The function accepts an integer and returns an integer

// 3. Initial solution( complexity: time=>O() space=>O())

def square_digits(num):
    return int(''.join([str(int(i) ** 2) for i in str(num)]))
    
// 4. Improved solution( complexity: time=>O() space=>O() )
