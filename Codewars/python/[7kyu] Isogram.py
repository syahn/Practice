# Reflection

# - solved

# Problem

# An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

# is_isogram("Dermatoglyphics" ) == true
# is_isogram("aba" ) == false
# is_isogram("moOse" ) == false # -- ignore letter case

# Initial solution( complexity: time=>O() space=>O())

def is_isogram(string):
	string = string.lower()
	return string == ''.join(sorted(set(string), key=string.index))
  

# Improved solution( complexity: time=>O() space=>O() )

def is_isogram(string):
    return len(string) == len(set(string.lower()))