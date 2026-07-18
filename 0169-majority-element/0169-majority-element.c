int cmp(const void *a , const void*b){
    int x=*(const int*)a;
    int y=*(const int*)b;
    if(x<y) return -1;
    if(x>y) return 1;
    else return 0;
}
int majorityElement(int* nums, int numsSize) {
    int a;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++){
        if(  i!=0 && nums[i]!=nums[i-1] ){
         a=nums[i];
        }
        else if(i==0){
        a=nums[i];
        }
        else{
            continue;
        }
        int count=1;
        for(int j=1;j<numsSize;j++){
            if(a==nums[j]){
                count++;
            }
        }
        int b=numsSize/2;
        if(count>b){
            return a;
        }
    }
    return 0;
}