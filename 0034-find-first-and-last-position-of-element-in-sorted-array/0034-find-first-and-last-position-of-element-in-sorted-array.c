/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = malloc(2 * sizeof(int));
    int a=-1;
    int b=-1;
    int left=0;
    int right=numsSize-1;
    if(numsSize==0) {
    ans[0]=a;
    ans[1]=b;
    return ans;
    }
    while(left<=right){
        int mid=(right+left)/2;
        if(nums[mid]==target){
            a=mid;
            right=mid-1;
            
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    left=0;
    right=numsSize-1;
        while(left<=right){
        int mid=(right+left)/2;
        if(nums[mid]==target){
            b=mid;
           
            left=mid+1;
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    *returnSize=2;     
    if(a=='-1' || b=='-1'){
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
    else{
        ans[0]=a;
        ans[1]=b;
        return ans;
    }
}