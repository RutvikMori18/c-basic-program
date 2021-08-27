class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()<2){
            return;
        }int temp=-1;
        for(int i =0;i<nums.size();i++){
            for(int j = i;j<nums.size();j++){
            
                if(nums[i]>nums[j]){
                
                    temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};
