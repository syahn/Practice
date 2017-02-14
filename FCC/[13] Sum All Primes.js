// 1. Reflection

// - I solved it in brute force way. 
// - I became to know about sieve algorithm for getting prime numbers.


// 2. Problem

// Sum all the prime numbers up to and including the provided number.
//
// A prime number is defined as a number greater than one and having only two divisors,
// one and itself. For example, 2 is a prime number because it's only divisible by one and two.
//
// The provided number may not be a prime.


// 3. Initial solution

function sumPrimes(num) {
  let ret = 0;
  for(let i=2; i<=num; i++){
    let isPrime = true;
    for(let j=2; j<i; j++){
      if(i != j && i % j == 0){
        isPrime = false;
        break;
      }
    }
    if(isPrime) ret += i;
  }
  return ret;
}

// 4. Improved solution

function sumPrimes(num) {
    var sieve = [], i, j, primes = 0;
    for (i = 2; i <= num; ++i) {
        if (!sieve[i]) {
            // i has not been marked -- it is prime
            primes += i;
            for (j = i << 1; j <= num; j += i) {
                sieve[j] = true;
            }
        }
    }
    return primes;
}
