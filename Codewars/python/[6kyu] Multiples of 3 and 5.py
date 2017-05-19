// 1. Reflection

# - solved
# - It's pythonic, but not the best practice

// 2. Problem

# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

# Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

# Note: If the number is a multiple of both 3 and 5, only count it once.

// 3. Initial solution( complexity: time=>O() space=>O())

def solution(number):
  return sum([n for n in range(1, number) if n % 3 is 0 or n % 5 is 0])


// 4. Improved solution( complexity: time=>O() space=>O() )
