int searchInsert(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    if(nums[numsSize-1]<target) return numsSize;
    if(nums[0]>target) return 0;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            if(nums[mid-1]<target){
                return mid;
            }
            else{
                right=mid-1;
            }
        }
        else{
            if(nums[mid+1]>target){
                return mid+1;
            }
            else{
                left=mid+1;
            }
        }
    }
    return 0;
}