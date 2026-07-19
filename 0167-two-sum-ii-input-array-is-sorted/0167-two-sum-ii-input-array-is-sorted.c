/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    if( numbersSize < 2){
        return 0;
    }
    int left = 0;
    int right = numbersSize - 1;
    int *result;
    result = (int *)malloc(2*sizeof(int));
    while(left < right){
            if( (numbers[left] + numbers[right]) == target){
                result[0] = (left+1);
                result[1] = (right+1);
                *returnSize = 2;
                return result;
            }
            else if((numbers[left] + numbers[right]) > target){
                right--;
            }
            else{
                left++;
            }
        }
    
    return 0;
}