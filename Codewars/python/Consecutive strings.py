// 1. Reflection

# - Solved. 
# - slice is huge win!

// 2. Problem

# You are given an array strarr of strings and an integer k. Your task is to return the first longest string consisting of k consecutive strings taken in the array.

# #Example: longest_consec(["zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"], 2) --> "abigailtheta"

# n being the length of the string array, if n = 0 or k > n or k <= 0 return "".

// 3. Initial solution( complexity: time=>O() space=>O())

def longest_consec(strarr, k):
  	n = len(strarr)
	if k > n or k <= 0:
		return ''
	longest = ''
	for i in range(n-k+1):
		tempCount = ''
		for j in range(i, i+k):
			tempCount += strarr[j]	
		if (len(longest) < len(tempCount)):
			longest = tempCount
	return longest

// 4. Improved solution( complexity: time=>O() space=>O() )

def longest_consec(strarr, k):
  longest = ''
  if k <= len(strarr) or k > 0:
    for i in range(len(strarr)-k+1):
      temp = ''.join(strarr[i:i+k])
      if (len(longest) < len(temp)):
        longest = temp
  return longest