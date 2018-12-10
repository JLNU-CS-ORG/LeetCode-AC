var twoSum = function(nums, target) {
    /* solution for n^2 */
    var arr = new Array(2);
    var NumsLength = nums.length;
    for (var i = 0; i < NumsLength; i++) {
        for (var j = i + 1; j < NumsLength; j++) {
            if (nums[i] + nums[j] === target) {
                arr[0] = i;
                arr[1] = j;
                break;
            }
        }
    }
    return arr;
};
