// 1. Reflection

# - solve
# - nothing special

// 2. Problem

# x Simple, given a string of words, return the length of the shortest word(s).

# String will never be empty and you do not need to account for different data types.

// 3. Initial solution( complexity: time=>O() space=>O())

def find_short(s):
  	return len(min(s.split(), key = len))

// 4. Improved solution( complexity: time=>O() space=>O() )

def find_short(s):
  return min(len(x) for x in s.split())