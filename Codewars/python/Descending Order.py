// 1. Reflection

# - solved

// 2. Problem

# Your task is to make a function that can take any non-negative integer as a argument and return it with it's digits in descending order. Essentially, rearrange the digits to create the highest possible number.

# Examples:

# Input: 21445 Output: 54421

# Input: 145263 Output: 654321

# Input: 1254859723 Output: 9875543221

// 3. Initial solution( complexity: time=>O() space=>O())

def Descending_Order(num):
  	return int(''.join(sorted([i for i in str(num)], reverse=True)))

// 4. Improved solution( complexity: time=>O() space=>O() )
