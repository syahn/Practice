# Reflection

# - solved. 
# - destruction!!!

# Problem

# Implement a method that accepts 3 integer values a, b, c. The method should return true if a triangle can be built with the sides of given length and false in any other case.

# (In this case, all triangles must have surface greater than 0 to be accepted).

# Initial solution( complexity: time=>O() space=>O())

def is_triangle(a, b, c):
    arr = sorted([a,b,c], reverse=True)
    return arr[0] < (arr[1] + arr[2])



# Improved solution( complexity: time=>O() space=>O() )

def is_triangle(a, b, c):
    a, b, c = sorted([a,b,c])
    return c < a + b
