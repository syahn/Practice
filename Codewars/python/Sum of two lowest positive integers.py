// 1. Reflection

# - solved


// 2. Problem

# Due to another of his misbehaved, the primary school's teacher of the young Gauß, Herr J.G. Büttner, to keep the bored and unruly young schoolboy Karl Friedrich Gauss busy for a good long time, while he teaching arithmetic to his mates, assigned him the problem of adding up all the whole numbers from 1 through a given number n.

# Your task is to help the young Carl Friedrich to solve this problem as quickly as you can; so, he can astonish his teacher and rescue his recreation interval.



// 3. Initial solution( complexity: time=>O() space=>O())

def sum_two_smallest_numbers(numbers):
  minNum = min(numbers)
	idx = numbers.index(minNum)
	if idx is 0:
		return minNum + min(numbers[1:])
	elif idx is len(numbers) - 1:
		return minNum + min(numbers[:-1])
	return  minNum + min(min(numbers[0:idx]), min(numbers[idx+1:]))

// 4. Improved solution( complexity: time=>O() space=>O() )

# It's slow though
def sum_two_smallest_numbers(numbers):
  numbers.sort()
	return sum(numbers[:2])