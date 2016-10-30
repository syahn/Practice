#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> & arr, int low,int mid,int high)
{
	int h,i,j,k;
	vector<int> tempArr;
	h=low;
	j=mid+1;

	while((h<=mid)&&(j<=high))
	{
	  if(arr.at(h)<=arr.at(j)) {
			tempArr.push_back(arr.at(h++));
		}
	  else {
		  tempArr.push_back(arr.at(j++));
	  }
	}

	if(h>mid)
	{
	  for(k=j; k<=high; k++) {
			tempArr.push_back(arr.at(k));
	  }
	} else {
	  for(k=h;k<=mid;k++) {
			tempArr.push_back(arr.at(k));
	  }
	}

	tempArr.swap(arr);
}

void merge_sort(vector<int>& arr,int low, int high) {
	int mid;
	if(low<high)
		{
			mid = low + (high-low)/2; //This avoids overflow when low, high are too large
		  merge_sort(arr, low,mid);
		  merge_sort(arr, mid+1,high);
		  merge(arr, low, mid, high);
		}
}


int main() {
    int n, num;
    vector<int> arr;
    cin >> n;

    for(int i=0; i<n; i++){
    	cin >> num;
    	arr.push_back(num);
    }
    merge_sort(arr, 0, n);

    for(int j=0; j<n; j++){
    	cout << arr.at(j) << "\n";
    }
    // cout << arr.at(1);
    return 0;
}
