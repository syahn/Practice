#Analysis

A. Best-case: Ω()
B. Average-case: O()
C. Worst-case: О()


#Pseudocode

time: O(1)

Heap-maximum(A)
  return A[1]

time: O(log(n)) : Max-Heapify가 log(n)

Heap-extract-max(A, n)
  if n < 1
    then error "heap underflow"
  max <- A[1]
  A[1] <- A[n]
  Max-Heapify(A, 1, n-1)
  return max

time: O(log(n))

Heap-increase-key(A, i, key)
  if key < A[i]
    then error "new key is smaller than current key"
  A[i] <- key
  while i > 1 and A[PARENT(i)] < A[i]
    do exchange A[i] <-> A[PARENT(i)]
      i <- PARENT(i)

time: O(log(n))

Max-heap-insert(A, key, n)
  A[n+1] <- -∞
  Heap-increase-key(A, n+1, key)
