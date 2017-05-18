// 1. Reflection

# - Solved. 
# - I don't get used to use list comprehesion instead of filter, map

// 2. Problem

# Return the number (count) of vowels in the given string.

# We will consider a, e, i, o, and u as vowels for this Kata.

// 3. Initial solution( complexity: time=>O() space=>O())

def getCount(inputStr):
    return len(list(filter(lambda s: s in "aeiou", inputStr)))

// 4. Improved solution( complexity: time=>O() space=>O() )

def getCount(s):
    return sum(c in 'aeiou' for c in s)
