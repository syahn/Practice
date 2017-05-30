# Reflection

# - solved, but not beautifully


# Problem

# You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns N.

# For example:

# [2, 4, 0, 100, 4, 11, 2602, 36]

# Should return: 11

# [160, 3, 1719, 19, 11, 13, -21]

# Should return: 160


# Initial solution( complexity: time=>O(N) space=>O(N))

def find_outlier(integers):
	newInt = map(lambda x: x % 2, integers)
	afterSum = sum(newInt)
	
	for i in range(len(integers)):
		if (afterSum == 1 and newInt[i] == 1) or (afterSum != 1 and newInt[i] == 0):
			return integers[i];

# Improved solution( complexity: time=>O() space=>O() )

def find_outlier(int):
    odds = [x for x in int if x%2!=0]
    evens= [x for x in int if x%2==0]
    return odds[0] if len(odds)<len(evens) else evens[0]

def find_outlier(integers):
    parity = [n % 2 for n in integers]
    return integers[parity.index(1)] if sum(parity) == 1 else integers[parity.index(0)]