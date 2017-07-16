# Reflection

# - failed

# Problem

# A zero-indexed array A consisting of N integers is given. A triplet (P, Q, R) is triangular if it is possible to build a triangle with sides of lengths A[P], A[Q] and A[R]. In other words, triplet (P, Q, R) is triangular if 0 ≤ P < Q < R < N and:

# A[P] + A[Q] > A[R],
# A[Q] + A[R] > A[P],
# A[R] + A[P] > A[Q].
# For example, consider array A such that:

#   A[0] = 10    A[1] = 2    A[2] = 5
#   A[3] = 1     A[4] = 8    A[5] = 12
# There are four triangular triplets that can be constructed from elements of this array, namely (0, 2, 4), (0, 2, 5), (0, 4, 5), and (2, 4, 5).

# Write a function:

# def solution(A)

# that, given a zero-indexed array A consisting of N integers, returns the number of triangular triplets in this array.

# For example, given array A such that:

#   A[0] = 10    A[1] = 2    A[2] = 5
#   A[3] = 1     A[4] = 8    A[5] = 12
# the function should return 4, as explained above.

# Assume that:

# N is an integer within the range [0..1,000];
# each element of array A is an integer within the range [1..1,000,000,000].
# Complexity:

# expected worst-case time complexity is O(N2);
# expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
# Elements of input arrays can be modified.

# Initial solution( complexity: time=>O() space=>O())


def solution(A):
    n = len(A)
    z = 0
    ret = 0
    for x in xrange(n):
        for y in xrange(x + 1, n):
            for z in xrange(y + 1, n):
                if A[x] + A[y] > A[z] and A[x] + A[z] > A[y] and A[y] + A[z] > A[x]:
                    ret += 1
    return ret


# Improved solution( complexity: time=>O() space=>O() )

def solution(A):
    A.sort()
    n = len(A)
    z = 0
    ret = 0
    for x in xrange(n):
        z = x + 2
        for y in xrange(x + 1, n):
            while z < n and A[x] + A[y] > A[z]:
                z += 1
                print x, y, z
            ret += z - y - 1
    return ret