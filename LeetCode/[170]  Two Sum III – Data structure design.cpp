// 1. Reflection

- There are 3 different approaches to solve this in different space and time complexity.


// 2. Problem

// Design and implement a TwoSum class. It should support the following operations: add and find.
// add(input) – Add the number input to an internal data structure.
// find(value) – Find if there exists any pair of numbers which sum is equal to the value.
// For example,
// add(1); add(3); add(5); find(4)true; find(7)false

// 3. Initial solution( complexity: time=>O() space=>O())

class TwoSum {
private:
    vector<int> arr;

public:
    bool find(int target){
        if(arr.empty() || arr.size() < 2) return false;
        unordered_map<int, int> hash;
        for(int i=0; i<arr.size(); i++){
            int findThis = target - arr[0];
            if(hash.find(findThis) != hash.end()){
                return true;
            } else {
                hash[arr[i]] = i;
            }
        }
        return false;
    };

    void add(int num){
        arr.push_back(num);
    }
}

// 4. Improved solution( complexity: time=>O() space=>O() )
