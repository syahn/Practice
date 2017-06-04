# Reflection

# - solved. but ugly

# Problem

# Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string, the longest possible, containing distinct letters,

# each taken only once - coming from s1 or s2. #Examples: ``` a = "xyaabbbccccdefww" b = "xxxxyyyyabklmopq" longest(a, b) -> "abcdefklmopqwxy"
# a = "abcdefghijklmnopqrstuvwxyz" longest(a, a) -> "abcdefghijklmnopqrstuvwxyz" ```

# Initial solution( complexity: time=>O() space=>O())
import string

def longest(s1, s2):
    count = {}
    for a in s1:
        count[a] = count.get(a, 0) + 1
    for b in s2:
        count[b] = count.get(b, 0) + 1
    return ''.join([ c for c in string.ascii_lowercase if count.get(c, 0) > 0])


# Improved solution( complexity: time=>O() space=>O() )

def longest(s1, s2):
  return ''.join(sorted(set(s1 + s2)))