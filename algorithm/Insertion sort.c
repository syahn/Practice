#Analysis

A. Best-case: O(n)
B. Average-case: O(n^2)
C. Worst-case: О(n^2)

- running time depends on the input
  a. sorted sequence is easier to sort


#Pseudocode

INSERTION-SORT (A, n)
  for j <- 2 to n
    do key <- A[j]
      i <- j-1
      while i > 0 and A[i] > key
        do A[i+1] <- A[i]
          i <- i-1
      A[i+1] = key
