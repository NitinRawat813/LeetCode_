class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int temp = 0;
        int i = 0;
        while( i < n ){
            if( nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]){
                index = nums[i] - 1 ;
                if( index != i ){
                    temp = nums[index];
                    nums[index] = nums[i];
                    nums[i] = temp;
                    continue;
                }
            }
            i++;
        }
        i = 0;
        for( int i = 0 ; i < n ; i++){
            if( nums[i] != i + 1){
                return (i+1);
            }
        }
        return n+1;
    }
};