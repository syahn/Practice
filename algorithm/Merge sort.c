#Analysis

A. Best-case: Ω(nlogn)
B. Average-case: O(nlogn)
C. Worst-case: О(nlogn)

- T(n) = 0(1) if n=1
       = 2T(n/2) + 0(n) if n>1
- ,


#Pseudocode

Merge-sort A[1...n]
  1. if n = 1, done
  2. Recursively sort A[1..n/2] and
                      A[n/2+1...n]
  3. Merge 2 sorted lists


#Code

void mergeSort(int * arr, int left, int right){
	int i, j, key;

	if(left < right){
		int mid = (left + right) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}

}

void merge(int * arr, int left, int mid, int right){

	int i, j, k;
	int temp[300];

	i = left;
	j = mid+1;
	k = 0;


	while ((i <= mid) && (j <= right)){

		if (arr[i] >= arr[j]){
			temp[k++] = arr[i++];
		} else {
			temp[k++] = arr[j++];
		}
	}
	while(i <= mid)
		temp[k++]=arr[i++];

	while(j <= right)
		temp[k++]=arr[j++];

	k--;
	while (k >= 0) {
				arr[left + k] = temp[k];
				k--;
		}

}
