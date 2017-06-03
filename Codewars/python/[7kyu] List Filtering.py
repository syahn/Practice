// 1. Reflection

# - failed
# - I learned about isinstance

// 2. Problem

# In this kata you will create a function that takes a list of non-negative integers and strings and returns a new list with the strings filtered out.

// 3. Initial solution( complexity: time=>O() space=>O())

def filter_list(l):
  return [ i for i in l if i is not str(i)]


// 4. Improved solution( complexity: time=>O() space=>O() )

def filter_list(l):
  # 'return a new list with the strings filtered out'
  return [i for i in l if not isinstance(i, str)]