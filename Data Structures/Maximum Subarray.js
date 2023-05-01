/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    // I think that we should calculate the sum of the whole array and then reiterate over the array
    // so we can compare it with the whole summation!

    var maxEndingHere = nums[0];     
    var maxSoFar = nums[0];

    for (let i = 1; i < nums.length; i++) {
        maxEndingHere = Math.max(maxEndingHere + nums[i], nums[i]);
        maxSoFar = Math.max(maxEndingHere, maxSoFar);
    }
    return maxSoFar;
};