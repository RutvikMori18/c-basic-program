class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     
        sort(nums.begin(),nums.end());
        int counter = 0;
        for( int i = 0; i<nums.size();i++){
            if(val == nums[i]){
                counter++;
                nums[i] = 60;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size() - counter;
        
    }
};
