/**
 * @param {number} n
 * @return {number}
 */

function helperFunction (n, memowizationArray) {
    if(n == 1) { return n; }
    if(n == 2) { return n; }

    if(memowizationArray[n] != null) {
        return memowizationArray[n];
    }

    memowizationArray[n] = helperFunction(n - 1, memowizationArray) + helperFunction(n - 2, memowizationArray);
    return memowizationArray[n];
}

var climbStairs = function(n) {

    var memowizationArray = [1, 1, 2];

    return helperFunction(n, memowizationArray);
};
