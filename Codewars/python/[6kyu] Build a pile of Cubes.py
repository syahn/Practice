# Reflection

# - solved

# Problem

# Your task is to construct a building which will be a pile of n cubes. The cube at the bottom will have a volume of n^3, the cube above will have volume of (n-1)^3 and so on until the top which will have a volume of 1^3.

# You are given the total volume m of the building. Being given m can you find the number n of cubes you will have to build?

# The parameter of the function findNb (find_nb, find-nb, findNb) will be an integer m and you have to return the integer n such as n^3 + (n-1)^3 + ... + 1^3 = m if such a n exists or -1 if there is no such n.

# Examples:

# findNb(1071225) --> 45
# findNb(91716553919377) --> -1

# Initial solution( complexity: time=>O(N) space=>O(1))

def find_nb(m):
  sum = 0
  n = 1
  while n ** 3 < m:
    sum += n ** 3
    if sum is m:
      return n 
    elif sum > m:
      return -1
    n += 1
  return -1

# Improved solution( complexity: time=>O() space=>O() )

# Used the formula for the sum of cubes: m = (n(n+1)/2)^2
# Rearranged to find n^2 + n = n(n+1) ~= n^2 ~= 2sqrt(m),
# so take square root and round down the result.
n_canidate = int(floor(sqrt(2 * sqrt(m))))
if (n_canidate * (n_canidate + 1) / 2 )**2 == m:
    return n_canidate
else:
    return -1