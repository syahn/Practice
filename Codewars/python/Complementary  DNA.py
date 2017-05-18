// 1. Reflection

# - solved 
# - maketrans!

// 2. Problem

# Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

# If you want to know more http://en.wikipedia.org/wiki/DNA

# In DNA strings, symbols "A" and "T" are complements of each other, 
# as "C" and "G". You have function with one side of the DNA 
# (string, except for Haskell); you need to get the other complementary side. 
# DNA strand is never empty or there is no DNA at all (again, except for Haskell).

// 3. Initial solution( complexity: time=>O() space=>O())

def DNA_strand(dna):
  	dict = {
		'A': 'T',
		'C': 'G',
		'G': 'C',
		'T': 'A'
	}
	return ''.join([dict[c] for c in dna])

// 4. Improved solution( complexity: time=>O() space=>O() )

import string
def DNA_strand(dna):
    return dna.translate(string.maketrans("ATCG","TAGC"))
    # Python 3.4 solution || you don't need to import anything :)
    # return dna.translate(str.maketrans("ATCG","TAGC"))