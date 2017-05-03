// 1. Reflection

// - Failed. 
// - First, I tried to solve it by using Heap's permutation, but I failed.

// 2. Problem

// You have to create a function that takes a positive integer number and returns the next bigger number formed by the same digits:

// nextBigger(12)==21
// nextBigger(513)==531
// nextBigger(2017)==2071
// If no bigger number can be composed using those digits, return -1:

// nextBigger(9)==-1
// nextBigger(111)==-1
// nextBigger(531)==-1


// 3. Initial solution( complexity: time=>O() space=>O())
function nextBigger(n){
  
  let dict = permutator(n.toString().split(''))
  					.map(e => Number(e))
  					.sort((a, b) => b - a);
  let idx = dict.indexOf(n);
  
  return idx <= 0 ? -1 : dict[idx - 1];
}

const permutator = array => {
	let ret = [];
	
	var permute = n => {
	  if (n === 1) {
	    ret.push(array.join(''));
	  } else {
	    for (let i = 1; i <= n; i++) {
	      permute(n - 1);
	      j = n % 2 ? 1 : i;
	      [array[j-1], array[n-1]] = [array[n-1], array[j-1]];
	    }
	  }
	};
	permute(array.length);
	return ret;
}


// 4. Improved solution( complexity: time=>O() space=>O() )

const sortedDigits = n => n.toString().split('').sort((a, b) => b - a);

function nextBigger(n){
  let arr = sortedDigits(n);
  let max = Number(arr.join(''));

  for(var i = n + 1; i <= max; i++){
    if(sortedDigits(i).every((x, j) => x === arr[j])){
      return i;
    }
  }
  
  return -1;
}