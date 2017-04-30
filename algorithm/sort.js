function ArrayList() {
  var array = []; //{ 1}
  this.insert = function(item) {
    //{ 2}
    array.push(item);
  };
  this.toString = function() {
    //{ 3}
    return array.join();
  };

  this.bubbleSort = () => {
    for (let i = 0; i < array.length; i++) {
      for (let j = 0; j < array.length - 1 - i; j++) {
        if (array[j] > array[j + 1]) {
          [array[j], array[j + 1]] = [array[j + 1], array[j]];
        }
      }
    }
    return array;
  };

  this.selectionSort = () => {
    let len = array.length, min;
    for (let i = 0; i < length - 1; i++) {
      for (let j = i; j < len; j++) {
        if (array[min] > array[j]) min = j;
      }
      if (i !== min) {
        [i, min] = [min, i];
      }
    }
    return array;
  };

  this.insertionSort = function() {
    var length = array.length, j, temp;

    for (let i = 1; i < length; i++) {
      j = i;
      temp = array[i];
      while (j > 0 && array[i - 1] > temp) {
        array[j] = array[j - 1];
        j--;
      }
      array[j] = temp;
    }
  };

  this.mergeSort = () => {
    array = mergeSortRec(array);
  };

  const mergeSortRec = function(array) {
    let length = array.length;
    if (length === 1) {
      return array;
    }
    const mid = Math.floor(length / 2),
      left = array.slice(0, mid),
      right = array.slice(mid, length);
    return merge(mergeSortRec(left), mergeSortRec(right));
  };

  var merge = function(left, right) {
    let ret = [], il = 0, ir = 0;

    while (il < left.length && ir < right.length) {
      if (left[il] < right[ir]) {
        ret.push(left[il++]);
      } else {
        ret.push(right[ir++]);
      }
    }

    while (il < left.length) {
      ret.push(left[il++]);
    }

    while (ir < right.length) {
      ret.push(right[ir++]);
    }

    return ret;
  };

  this.quickSort = function() {
    quick(array, 0, array.length - 1);
  };

  const quick = function(array, left, right) {
    let index;
    if (array.length > 1) {
      index = partition(array, left, right);
      if (left < index - 1) {
        quick(array, left, index - 1);
      }

      if (index < right) {
        quick(array, index, right);
      }
    }
  };

  const partition = function(array, left, right) {
    let pivot = array[Math.floor((right + left) / 2)], i = left, j = right;
    while (i <= j) {
      while (array[i] < pivot) {
        i++;
      }
      while (array[j] > pivot) {
        j--;
      }
      if (i <= j) {
        [array[i], array[j]] = [array[j], array[i]];
        i++;
        j--;
      }
    }
    return i;
  }
}
