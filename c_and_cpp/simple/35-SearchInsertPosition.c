int searchInsert(int* nums, int numsSize, int target) 
{
	/* binary search can deal unorder array and ordered array*/
	int start = 0;
	int end = numsSize - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (target == nums[mid]) return mid;
		else if (target > nums[mid])
			start = mid + 1;
		else
			end   = mid - 1;
	}
	return start;
 }
