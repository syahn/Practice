# Reflection

# - SOLVED
# - improved one in elegant!

# Problem

# Your task is to sort a given string. Each word in the String will contain a single number. This number is the position the word should have in the result.

# Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).

# If the input String is empty, return an empty String. The words in the input String will only contain valid consecutive numbers.

# For an input: "is2 Thi1s T4est 3a" the function should return "Thi1s is2 3a T4est"


# Initial solution( complexity: time=>O() space=>O())

def order(sentence):
	arr = sentence.split()
	ret = [0] * len(arr)
	for i in range(len(arr)):
		for s in arr:
			if str(i+1) in s:
				ret[i] = s
	return ' '.join(ret)

# Improved solution( complexity: time=>O() space=>O() )

def order(words):
  return ' '.join(sorted(words.split(), key=lambda w:sorted(w)))