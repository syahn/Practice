// 1. Reflection

# - solved 
# - Don't forget to use slicing

// 2. Problem

# Given: an array containing hashes of names

# Return: a string formatted as a list of names separated by commas except for 
# the last two names, which should be separated by an ampersand.



// 3. Initial solution( complexity: time=>O() space=>O())

def namelist(names):
  if len(names) > 1:
    return ', '.join([pair['name'] for pair in names if pair is not names[-1]]) + ' & ' + names[-1]['name']
  elif len(names) is 1:
    return names[0]['name']
  else:
    return ''


// 4. Improved solution( complexity: time=>O() space=>O() )

def namelist(names):
  if len(names) > 1:
		return ', '.join([pair['name'] for pair in names[:-1]]) + ' & ' + names[-1]['name']
	else:
		return names[0]['name'] if names else ''