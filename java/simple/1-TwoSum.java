class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i, j;
        int len = nums.length;
        int[] arr = new int[2];
        for (i = 0; i < len; i++) {
            for (j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    arr[0] = i;
                    arr[1] = j;
                    break;
                }
            }
        }
        return arr;
    }
}
