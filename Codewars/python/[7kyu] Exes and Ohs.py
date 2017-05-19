// 1. Reflection

- solved. 
- Don't forget there's count in python

// 2. Problem

# Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contains any char.


// 3. Initial solution( complexity: time=>O() space=>O())

def xo(s):
  oNum = 0
	xNum = 0 
	for i in s:
		if i in 'oO':
			oNum += 1 
		if i in 'xX':
			xNum += 1
	return oNum is xNum 

// 4. Improved solution( complexity: time=>O() space=>O() )

def xo(s):
    s = s.lower()
    return s.count('x') == s.count('o')