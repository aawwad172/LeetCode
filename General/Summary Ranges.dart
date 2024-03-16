class Solution {
  List<String> summaryRanges(List<int> nums) {
    List<String> result = [];
    result.add(nums[0].toString());
    for (int i = 1; i < nums.length; i++) {
      if (nums[--i]++ != nums[i]) {}
    }
  }
}
// Todo