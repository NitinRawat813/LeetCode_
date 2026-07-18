
int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int totalSize = nums1Size + nums2Size;
    int* merged = (int*)malloc(totalSize * sizeof(int));
    int k = 0;
    for (int i = 0; i < nums1Size; i++) {
        merged[k++] = nums1[i];
    }
    for (int i = 0; i < nums2Size; i++) {
        merged[k++] = nums2[i];
    }
    qsort(merged, totalSize, sizeof(int), cmp);
    double median;
    if (totalSize % 2 == 1) {
        median = merged[totalSize / 2];
    } else {
        median = (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
    }
    free(merged);
    return median;
}
