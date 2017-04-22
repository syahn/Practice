function bubbleSort(arr) {
  let i = 1, swapped = false;
  while(1) {
  	while (i<arr.length) {
	    if (arr[i-1] > arr[i]) {
	      [arr[i], arr[i-1]] = [arr[i-1], arr[i]];
	      swapped = true;
	    }
	    i++;
	  }
	  if(swapped === false) return arr;
	  swapped = false, i = 1;
  }
  return arr;
}
