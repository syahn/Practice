# Reflection

# - solved.
# - Getting used to utilize from collections import Counter and get 

# Problem

# The goal of this exercise is to convert a string to a new string where each character in the new string is '(' if that character appears only once in the original string, or ')' if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

# Examples:

# "din" => "((("

# "recede" => "()()()"

# "Success" => ")())())"

# "(( @" => "))(("


# Initial solution( complexity: time=>O() space=>O())

def duplicate_encode(word):
  count = {};
  word = list(word.lower())
  for s in word:
  	count[s] = count.get(s, 0) + 1
  
  return ''.join([')' if count[s] > 1 else '('for s in word])

# Improved solution( complexity: time=>O() space=>O() )
