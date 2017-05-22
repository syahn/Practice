# Reflection

# - solved, but ugly
# - If I start to write down complex logical expression, I'm highly of doing something wrong.

# Problem

# Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given numbers finds one that is different in evenness, and return a position of this number.

# ! Keep in mind that your task is to help Bob solve a real IQ test, which means indexes of the elements start from 1 (not 0)

# Initial solution( complexity: time=>O() space=>O())
def iq_test(numbers):
	arr = [int(n) % 2 == 0 for n in numbers.split() ]
	findit = -1
	for i in range(len(arr)-1):
		if arr[i] is not arr[i+1]:
			findit = i
			if i > 0: 
				if arr[i-1] is not arr[i]:
					return findit + 1
				else:
					return i+1+1
	return findit + 1


# Improved solution( complexity: time=>O() space=>O() )

def iq_test(numbers):
    e = [int(i) % 2 == 0 for i in numbers.split()]

    return e.index(True) + 1 if e.count(True) == 1 else e.index(False) + 1