// Reflection

// - First problem regarding bit manipulation.
// - For counting 1 in the sequence,
//     while (n) {
//         ++count;
//         n &= n - 1;
//     }


// Problem

// The Hamming distance between two integers is the number of positions at which
// the corresponding bits are different.
//
// Given two integers x and y, calculate the Hamming distance.
//
// Note:
// 0 ≤ x, y < 231.

// Initial solution( Complexity: O(n)  )

class Solution {
public:
    int getBit(int num, int i){
        return ((num & (1<<i)) != 0);
    }
    int hammingDistance(int x, int y) {
        int countDecimal = x ^ y,
            count = 0;
        for(int i=0; i<32; i++){
            count += getBit(countDecimal, i);
        }
        return count;
    }
};


// Improved solution( Complexity: O(n)  )

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n &= n - 1;
        }
        return dist;
    }
};
