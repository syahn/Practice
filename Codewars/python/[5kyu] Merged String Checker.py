# Reflection

# - I failed. 
# - Consider recursion too. 

# Problem

# At a job interview, you are challenged to write an algorithm to check if a given string, s, can be formed from two other strings, part1 and part2.

# The restriction is that the characters in part1 and part2 are in the same order as in s.

# The interviewer gives you the following example and tells you to figure out the rest from the given test cases.

# For example:

# 'codewars' is a merge from 'cdw' and 'oears':

#     s:  c o d e w a r s   = codewars
# part1:  c   d   w         = cdw
# part2:    o   e   a r s   = oears

# Initial solution( complexity: time=>O() space=>O())


def is_merge(s, part1, part2):
    s = list(s)
    for j, c in enumerate(part1):
    	try: 
    		idx = s.index(c)
    		del s[s.index(c)]
    	except ValueError:
    		pass
    	print j, c, idx, s
    return ''.join(s) == part2	


# Improved solution( complexity: time=>O() space=>O() )

def is_merge(s, part1, part2):
    if not part1:
      return s == part2
    if not part2:
      return s == part1
    if not s:
      return part1 + part2 == ''
    if s[0] == part1[0] and is_merge(s[1:], part1[1:], part2):
      return True
    if s[0] == part2[0] and is_merge(s[1:], part1, part2[1:]):
      return True
    return False