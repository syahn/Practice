// 1. Reflection

# - solved
# - So I can use key in max!

// 2. Problem

# You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the first array and y be any string in the second array.

# Find max(abs(length(x) − length(y)))

# If a1 or a2 are empty return -1 in each language except in Haskell where you will return Nothing.

// 3. Initial solution( complexity: time=>O() space=>O())

def mxdiflg(a1, a2):
  if len(a1) is 0 or len(a2) is 0:
  	return -1
  newA1 = list(map(lambda x: len(x), a1))
  newA2 = list(map(lambda x: len(x), a2))
  return max(abs(max(newA2) - min(newA1)), abs(max(newA1) - min(newA2)))

// 4. Improved solution( complexity: time=>O() space=>O() )

def mxdiflg(a1, a2):
  if a1 and a2:
    return max(
      len(max(a1, key=len)) - len(min(a2, key=len)), 
      len(max(a2, key=len)) - len(min(a1, key=len)))
	return -1