// 1. Reflection

# - Solved, but ugly
# - I didn't get used to use range. I don't need to use list complrehension.

// 2. Problem

# Given two integers, which can be positive and negative, find the sum of all the numbers between including them too and return it. If both numbers are equal return a or b.

# Note! a and b are not ordered!

// 3. Initial solution( complexity: time=>O() space=>O())

def get_sum(a,b):
  if a is b: return a
  x = min(a, b)
  y = max(a, b)
  return sum([i for i in range(x, y+1)])

// 4. Improved solution( complexity: time=>O() space=>O() )

def get_sum(a,b):
    return sum(xrange(min(a,b), max(a,b)+1))