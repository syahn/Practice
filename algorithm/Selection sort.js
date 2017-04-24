var array = [];
(function createArray(size) {
  array.push(+(Math.random() * 100).toFixed(0));
  return size > 1 ? createArray(size - 1) : undefined;
})(12);

function selectionSort(array) {
  for (let i = 0; i < array.length; i++) {
    let min = i;
    for (let j = i + 1; j < array.length; j++) {
      if (array[min] > array[j]) min = j;
      if (j === array.length - 1) {
        [array[i], array[min]] = [array[min], array[i]];
      }
    }
  }
  return array;
}
