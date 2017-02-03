// 1. Reflection

 - I didn't take account into whole possible cases. Next time, consider that too.
 - I should be able to solve it without using substr


// 2. Problem

// Implement strStr().
//
// Returns the index of the first occurrence of needle in haystack, or -1 
// if needle is not part of haystack.

// 3. Initial solution( complexity: time=>O(nm) space=>O(1))

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="") return 0;
        int needleLen = needle.size();
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i] == needle[0] && haystack.substr(i, needleLen) == needle)
                return i;
        }
        return -1;
    }
};

// 4. Improved solution( complexity: time=>O() space=>O() )
