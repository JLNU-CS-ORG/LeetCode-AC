int* twoSum(int* nums, int numsSize, int target) 
{
	/* O(n^2) solution ways */
	/* hash table can reduce a linear level */
	int i, j;
	int *temp = (int*) malloc(sizeof(int) * 2);
	for (i = 0; i < numsSize; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				temp[0] = i;
				temp[1] = j;
				return temp;
			}
		} 
	}
	return temp;
}
