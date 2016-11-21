Worst time: ordered / reverse-ordered
  - T(n) = T(0) + T(n-1) + 0(n)
         = 0(1) + T(n-1) + 0(n)
         = T(n-1) + 0(n)
         = 0(n^2)

running time: 0(n)

Partition(A, p< r)
  x <- A[p]
  i <- p
  for j <- p + 1 to r
    do if A[j] <= x
      then i <- i + 1
        exchange A[i] <-> A[j]
  exchange A[p] <-> A[i]
  return i
