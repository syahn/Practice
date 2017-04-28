function mergeSort(array) {
  let length = array.length;
  if (length === 1) return array;

  const mid = Math.floor(length / 2),
    left = array.slice(0, mid),
    right = array.slice(mid, length);
  return merge(mergeSort(left), mergeSort(right));
}

function merge(left, right) {
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
}
