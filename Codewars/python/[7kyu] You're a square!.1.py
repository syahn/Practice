// 1. Reflection

- Solved
- Learnded about is_integer()

// 2. Problem

# You like building blocks. You especially like building blocks that are squares. And what you even like more, is to arrange them into a square of square building blocks!

# However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're currently working in vain… Wait! That's it! You just have to check if your number of building blocks is a perfect square.

# Task

# Given an integral number, determine if it's a square number:

# In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.
# The tests will always use some integral number, so don't worry about that in dynamic typed languages.

// 3. Initial solution( complexity: time=>O() space=>O())

import math

def is_square(n): 
	return int(round(math.sqrt(n))) ** 2 is n

// 4. Improved solution( complexity: time=>O() space=>O() )

from math import sqrt

def is_square(n):
  return n > 0 and sqrt(n).is_integer()