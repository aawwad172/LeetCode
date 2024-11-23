/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */


// var twoSum = function(nums, target) {
//     solution = new Set();
//     for(var i = 0; i < nums.length; i++) {
//         var s = Math.abs(target - nums[i]);
//         for(var j = 0; j < nums.length; j++) {
//             if(s == nums[j]) { solution.add(j); }
//         }
//     }
//     return Array.from(solution);
// };

var twoSum = function(nums, target) {
    let solution = new Array();

    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        map.set(nums[i], i);
    }

    for (let i = 0; i < nums.length; i++) {
        let s;
        if (target > nums[i]) {
            s = target - nums[i];
        }else if (nums[i] > target) {
            s = nums[i] - target;
        }

        if (map.get(s) != undefined && map.get(s) != i) {
            solution.push(i, map.get(s));
            return solution;
        }
    }
    return solution;
};


var twoSum = function(nums, target) {
    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        let s = target - nums[i];

        if (map.get(s) != null) {
            return [map.get(s), i];
        } else {
            map.set(nums[i], i);
        }
    }
};