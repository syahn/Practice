/**
 * Heap's permutaion
 * 
 * @param {any} array 
 * @returns array
 */
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