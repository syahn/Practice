// 1. Reflection

# - Solved
# - I learned new way of usage join

// 2. Problem


// 3. Initial solution( complexity: time=>O() space=>O())

def double_char(s):
  ret = ''
  for i in s:
    ret += i * 2
  return ret

// 4. Improved solution( complexity: time=>O() space=>O() )

def double_char(s):
    return ''.join(c * 2 for c in s)