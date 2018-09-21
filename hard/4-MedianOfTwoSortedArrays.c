double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    /* Merge two array */
    int i = 0, j = 0;
    int k = 0;
    int t_len = nums1Size + nums2Size;
    int *result = (int*) malloc(sizeof(int) * t_len);
    if (nums1Size == 0 && nums2Size == 0)
        return 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {
        result[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        result[k++] = nums2[j++];
    }
    if (t_len & 1) {
        /* even numbers */
        return (double)result[t_len / 2];
    } else {
        return (double)(result[t_len / 2] + result[t_len / 2 - 1]) / 2.0;
    }
}
