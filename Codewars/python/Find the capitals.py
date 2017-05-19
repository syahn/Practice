// 1. Reflection

# - solved
# - To make list of index, use range!
# - filter & lambda

// 2. Problem

# Write a function that takes a single string (word) as argument. 
# The function must return an ordered list containing the indexes of all capital letters in the string.


// 3. Initial solution( complexity: time=>O() space=>O())

def capitals(word):
  	return [ i for i in range(len(word)) if word[i].isupper()]

// 4. Improved solution( complexity: time=>O() space=>O() )

def capitals(word):
    return filter(lambda x: word[x].isupper(), range(len(word)))