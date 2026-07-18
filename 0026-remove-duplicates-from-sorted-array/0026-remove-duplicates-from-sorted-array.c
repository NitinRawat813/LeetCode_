int removeDuplicates(int* nums, int numsSize) {

    int m=1;
    for(int i=1;i<numsSize;i++){
        int count=0;
        int flag=0;
        for(int j=i-1;j>=0;j--){
            count+=1;
            if(nums[i]==nums[j]){
            flag=1;
            break;
            }
            
        }
        if(flag==0){
            nums[m]=nums[i];
            m=m+1;
        
        }
    }
    return m;}
