#Analysis

A. Best-case: Ω(n)
  - in ordered
  - SELECTION-SORT보다 나음
B. Average-case: O(n^2)
C. Worst-case: О(n^2)
  - in reversed order


#Pseudocode

procedure bubbleSort( A )
  swapped = -1
  while swapped != 0
    swapped = 0
    for i = 1 to n-1
      /* if this pair is out of order */
      if A[i+1] > A[i] then
        /* swap them and remember something changed */
        swap( A[i+1], A[i] )
        swapped += 1
