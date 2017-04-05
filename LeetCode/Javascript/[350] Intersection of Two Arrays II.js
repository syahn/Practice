// 1. Reflection

// - Solved
// - map[c] = map.hasOwnProperty(c) ? map[c]+1 : 1; can be done like
//   map[c] = (map[c] + 1) || 1;

// 2. Problem

// Given two arrays, write a function to compute their intersection.
//
// Example:
// Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].
//
// Note:
// Each element in the result should appear as many times as it shows in both arrays.
// The result can be in any order.
//
// Follow up:
// What if the given array is already sorted? How would you optimize your algorithm?
// What if nums1's size is small compared to nums2's size? Which algorithm is better?
// What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?


// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let ret = [];
    let countA = {}, countB = {};
    nums1.forEach(e => {
        countA[e] = countA.hasOwnProperty(e) ? countA[e]+1 : 1;
    })
    nums2.forEach(e => {
        countB[e] = countB.hasOwnProperty(e) ? countB[e]+1 : 1;
    })
    let keyA = Object.keys(countA);
    let keyB = Object.keys(countB);

    keyA.forEach(e => {
        if(keyB.indexOf(e) > -1) {
            if(countA[e] <= countB[e]) {
                for(let i=0; i<countA[e]; i++) {
                    ret.push(Number(e));
                }
            } else {
                for(let i=0; i<countB[e]; i++) {
                    ret.push(Number(e));
                }
            }
        }
    })
    return ret;
};

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )


/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let count = nums1.reduce((map, c) => {
        map[c] = (map[c] + 1) || 1;
        return map;
    }, {});

    const ret = nums2.filter(e => {
        if(count[e]) {
            count[e]--;
            return true;
        } else {
            return false;
        }
    })

    return ret;
};
