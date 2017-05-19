// 1. Reflection

- solved 
- I learned how to use translate!!!

// 2. Problem

Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

// 3. Initial solution( complexity: time=>O() space=>O())

def disemvowel(string):
  return ''.join([s for s in string if s not in "aeiouAEIOU"])

// 4. Improved solution( complexity: time=>O() space=>O() )

def disemvowel(s):
    return s.translate(None, "aeiouAEIOU")
