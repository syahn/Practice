// 1. Reflection

// - Hash table made it so simple.
// - Try to use hash table once it's possible.

// 2. Problem

// Given an array of integers, find two numbers such that they add up to a specific target number.
// The function twoSum should return indices of the two numbers such that they add
// up to the target, where index1 must be less than index2. Please note that your
// returned answers (both index1 and index2) are not zero-based.
// You may assume that each input would have exactly one solution.

// 3. Initial solution( complexity: time=>O(n^2) space=>O(1))

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i< nums.size(); i++){
            for(int j=0; j < nums.size(); j++){
                if(i == j) continue;
                else if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(n))

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target){
        unordered_map<int, int> hash;
        for(int i=0; i<numbers.size(); i++){
            int numNeed = target - numbers[i];
            if(hash.find(numNeed) != hash.end()){
                return { hash[numNeed], i};
            }
            hash[numbers[i]] = i;
        }
    }
};
