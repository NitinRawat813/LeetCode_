int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return x - y;
}
void nextPermutation(int* nums, int numsSize) {
    int last_digit=numsSize-1;
    int i=0;
    int now;
    int found;
    int found_index=0;
    int flag=0;
    for(i=last_digit;i>0;i--){
        if(flag==1) break;
        if(nums[i-1]<nums[i]){
            int min=nums[i-1];
            int max=nums[i];
            int j=i;
            if(j==last_digit){
                found_index=j;
            }
            else{
            while(j!=numsSize){
                if(nums[j]>min && nums[j]<=max){
                     found=nums[j];
                     found_index=j;
                     max=nums[j];
                }
                j++;
            }
            }
            now=nums[found_index];
            nums[found_index]=nums[i-1];
            nums[i-1]=now;
            flag=1;
            break;
        }
    }
    if(flag==0){
        qsort(nums,numsSize,sizeof(int),cmp);
        return;
    }
    int l=1;
    for(int k=i;k<numsSize;k++){
        int left=k;
        int right=numsSize-l;
        if(left<right){
        int temp=nums[right];
        nums[right]=nums[left];
        nums[left]=temp;
        l++; }
    }
}