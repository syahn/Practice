// 1. Reflection

// - When binary search should be used, just implement it without using lower or upper bound.
// - Note that when the value isn't found in the middle, return not exact middle index,
//   but add or substract by 1.
// - Introduced to Two pointer technic.

// 2. Problem

// Similar to Question [1. Two Sum], except that the input array is already sorted in ascending order.

// 3. Initial solution( complexity: time=>O(nlogn) space=>O(1))

class Solution {
public:

    vector<int> twoSum(vector<int>& numbers, int target) {

        int N = numbers.size()-1;
        for(int i=0; i<N; i++){
            int findThis = target - numbers[i],
                end = N,
                start = i+1;

            while(start <= end){
                int mid = (start + end) / 2;
                if(findThis == numbers[mid]){
                    return { i + 1, mid + 1};
                } else if(findThis < numbers[mid]){
                    end = mid-1;
                } else {
                    start = mid+1;
                }
            }
        }
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1))

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, end=numbers.size()-1;
        while(i<=end){
            if(numbers[i] + numbers[end] > target){
                end -= 1;
            } else if(numbers[i] + numbers[end] < target){
                i += 1;
            } else if(numbers[i] + numbers[end] == target){
                return {i+1, end+1};
            }
        }

    }
};
