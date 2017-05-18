// 1. Reflection

# - solved, 
# - So, there are reduce, map, filter like JS

// 2. Problem

# Write a function, persistence, that takes in a positive parameter num and 
# returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit

// 3. Initial solution( complexity: time=>O() space=>O())

def persistence(n):
  if n < 10: return 0
	count = 0
	while True:
		t = 1
		while n > 0:
			t *= n % 10
			n //= 10 
		count += 1
		if t < 10: return count
		n = t 

// 4. Improved solution( complexity: time=>O() space=>O() )

import operator
def persistence(n):
    i = 0
    while n>=10:
        n=reduce(operator.mul,[int(x) for x in str(n)],1)
        i+=1
    return i