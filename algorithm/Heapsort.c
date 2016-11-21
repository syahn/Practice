#Analysis

A. Best-case: O()
B. Average-case: O()
C. Worst-case: О()

- height of node: # of edges on a longest simple path from the node down to a leaf
- height of heap: height of root = logn


#Pseudocode

Time : log(n)

Max-Heapify(A, i, n)
  l <- left(i)
  r <- right(i)
  if l <= n and A[l] > A[i]
    then largest <- l
    else largest <- i
  if r <= n and A[r] > A[largest]
    then largest <- r
  if largest != i
    then exchange A[i] <-> A[largest]
      Max-Heapify(A, largest, n)

Time: nlog(n) // Max-Heapify를 n번 호출

Build-Max-Heap(A, n)
  for i <- n/2 downto 1 // 왜 n/2부터? 처음으로 violation 가능성이 있기 때문에
    do Max-Heapify(A, i, n)


Heapsort(A, n)
  Build-Max-Heap(A, n)
  for i <- n downto 2 // root 제외
    do exchange A[1] <-> A[i]
      Max-Heapify(A, 1, i-1)
