// 1. Reflection

// - Solved, but not in smart way.
// - There should be shift of perspective. 

// 2. Problem

// There is a queue for the self-checkout tills at the supermarket. Your task is write a function to calculate the total time required for all the customers to check out!

// The function has two input variables:

// customers: an array (list in python) of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
// n: a positive integer, the number of checkout tills.
// The function should return an integer, the total time required.

// EDIT: A lot of people have been confused in the comments. To try to prevent any more confusion:

// There is only ONE queue, and
// The order of the queue NEVER changes, and
// Assume that the front person in the queue (i.e. the first element in the array/list) proceeds to a till as soon as it becomes free.
// The diagram on the wiki page I linked to at the bottom of the description may be useful.


// 3. Initial solution( complexity: time=>O(N^2) space=>O(N))

function queueTime(customers, n) {
  let pool = [];
  let time = 0;
  if (customers.length <= 1) {
    return customers.reduce((a, c) => a + c, 0);
  } else if (customers.length <= n) {
    return Math.max(...customers);
  } else {
    while (n--)
      pool[n] = 0;
    while (customers.length > 0) {
      for (let i = 0; i < pool.length; i++) {
        if (pool[i] === 0) {
          if (customers.length > 0) {
            pool[i] = customers.shift();
          } else {
            break;
          }
        }
      }
      const min = Math.min(...pool);
      for (let i = 0; i < pool.length; i++) {
        pool[i] -= min;
      }
      time += min;
    }
    time += Math.max(...pool);
    return time;
  }
}

// 4. Improved solution( complexity: time=>O(N^2) space=>O(N) )

function queueTime(customers, n) {
  let pool = new Array(n).fill(0);
  for (let c of customers) {
  	let idx = pool.indexOf(Math.min(...pool));
  	pool[idx] += c;
  }
	return Math.max(...pool);
}