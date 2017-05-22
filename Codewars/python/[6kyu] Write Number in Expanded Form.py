# Reflection

# - solved

# Problem

# Write Number in Expanded Form

# You will be given a number and you will need to return it as a string in Expanded Form. For example:

# expanded_form(12) # Should return '10 + 2'
# expanded_form(42) # Should return '40 + 2'
# expanded_form(70304) # Should return '70000 + 300 + 4'
# NOTE: All numbers will be whole numbers greater than 0.

# Initial solution( complexity: time=>O() space=>O())


def expanded_form(num):
    num = str(num)
    return ' + '.join([
        str(int(c) * 10**(len(num) - 1 - i)) for i, c in enumerate(list(num))
        if int(c) > 0
    ])


# Improved solution( complexity: time=>O() space=>O() )
