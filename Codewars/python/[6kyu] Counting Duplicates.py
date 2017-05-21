# Reflection

# - solved

# Problem

# Count the number of Duplicates

# Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphanumeric characters, including digits, uppercase and lowercase alphabets.

# Example

# "abcde" -> 0 # no characters repeats more than once
# "aabbcde" -> 2 # 'a' and 'b'
# "aabbcdeB" -> 2 # 'a' and 'b'
# "indivisibility" -> 1 # 'i'
# "Indivisibilities" -> 2 # 'i' and 's'
# "aa11" -> 2 # 'a' and '1'


# Initial solution( complexity: time=>O() space=>O())

def duplicate_count(text):
  cache = {}
	count = 0
	for t in text:
		t = t.lower()
		if t in cache:
			if cache[t] is 1:
				count += 1
				cache[t] += 1
		else:
			cache[t] = 1
			
	return count

# Improved solution( complexity: time=>O() space=>O() )

def duplicate_count(text):
	return len({ c for c in text if text.lower().count(c) > 1})