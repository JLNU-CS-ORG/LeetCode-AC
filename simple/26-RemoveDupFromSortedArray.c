int removeDuplicates(int* nums, int numsSize)
{
	/* just for ordered sequence */
	int i;
	int result = 0;
	if (!numsSize)
		return 0;
	for (i = 0; i < numsSize; i++) {
		if (nums[i] != nums[result]) {
			result++;
			nums[result] = nums[i];
		}
	}
	return result + 1;
}
