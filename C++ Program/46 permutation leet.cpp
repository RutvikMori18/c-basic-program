class Solution {
public:
       vector<vector<int>> ds;

    void func1(int index,vector<int> &nums){
        if(index==nums.size()){
             ds.push_back(nums);
            return;
        }
       
        for(int j =index;j<nums.size();j++){
             swap(nums[index],nums[j]);
             func1(index+1,nums);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      
        func1(0,nums);
        
 return ds;       
    }
};
