/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    // We can create a set and then add the nums to it and if the length of the set
    //  Doesn't equal the length of the nums we can return false
    var set = new Set(nums);
    return set.size !== nums.length
};