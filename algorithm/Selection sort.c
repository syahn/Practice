#Analysis

A. Best-case: Ω(n^2)
B. Average-case: O(n^2)
C. Worst-case: О(n^2)


#Pseudocode

SELECTION-SORT(A)
  for i <- 1 to n-1
    smallest <- i
      for j <- i+1 to n
          if A[j] < A[smallest]
              smallest <- j
      Exchange A[i] <-> A[smallest]
