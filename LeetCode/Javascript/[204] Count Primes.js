// 1. Reflection

// - Failed
// - Sieve of Eratosthenes is used.

// 2. Problem

// Description:
//
// Count the number of prime numbers less than a non-negative number, n.

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {number} n
 * @return {number}
 */

var countPrimes = function(n) {
    if(n<=2) return 0;
    let count = 1, primes = [];

    for(let i=0; i<n; i++) primes[i] = false;

    let upper = Math.floor(Math.sqrt(n));

    for(let i=3; i<n; i+=2) {
        if(!primes[i]) {
          count++;
          if(i>upper) continue;
          for(let j=i*i; j<n; j += i) {
              primes[j] =  true;
          }
        }
    }
    return count;
};

// 4. Improved solution( complexity: time=>O() space=>O() )
