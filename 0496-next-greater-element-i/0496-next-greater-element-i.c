/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
     int* ans = (int*)malloc(nums1Size * sizeof(int));
    for(int i = 0; i < nums1Size; i++) {
        int pos = -1;
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                pos = j;
                break;
            }
        }
        ans[i] = -1;
        for(int j = pos + 1; j < nums2Size; j++) {
            if(nums2[j] > nums1[i]) {
                ans[i] = nums2[j];
                break;
            }
        }
    }
    *returnSize = nums1Size;
     return ans;
}