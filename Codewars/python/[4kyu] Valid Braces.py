# Reflection

# - Solved
# - Improved one is really clever

# Problem

# Write a function called validBraces that takes a string of braces, and determines if the order of the braces is valid. validBraces should return true if the string is valid, and false if it's invalid.

# This Kata is similar to the Valid Parentheses Kata, but introduces four new characters. Open and closed brackets, and open and closed curly braces. Thanks to @arnedag for the idea!

# All input strings will be nonempty, and will only consist of open parentheses '(' , closed parentheses ')', open brackets '[', closed brackets ']', open curly braces '{' and closed curly braces '}'.

# What is considered Valid? A string of braces is considered valid if all braces are matched with the correct brace. 
# For example:
# '(){}[]' and '([{}])' would be considered valid, while '(}', '[(])', and '[({})](]' would be considered invalid.

# Examples: 
# validBraces( "(){}[]" ) => returns true 
# validBraces( "(}" ) => returns false 
# validBraces( "[(])" ) => returns false 
# validBraces( "([{}])" ) => returns true 

# Initial solution( complexity: time=>O() space=>O())


def validBraces(string):
    dict = {'{': '}', '(': ')', '[': ']'}
    open = '{(['
    close = '})]'
    stk = []
    for n in string:
        if n in close:
            if len(stk) == 0:
                return False
            if n != stk[-1]:
                return False
            stk.pop()
        elif n in open:
            stk.append(dict[n])
    return True if len(stk) == 0 else False

def validBraces(string):
  dict = { '{': '}', '(': ')', '[': ']'}
  stk = []
  for n in string:
    if n in dict.keys():
      stk.append(n)
    else:
      if len(stk) == 0 or dict[stk.pop()] != n: 
      	return False

  return True if len(stk) == 0 else False
# Improved solution( complexity: time=>O() space=>O() )

 while '{}' in s or '()' in s or '[]' in s:
      s=s.replace('{}','')
      s=s.replace('[]','')
      s=s.replace('()','')
  return s==''