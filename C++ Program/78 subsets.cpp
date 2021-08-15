class Solution {
public:
    vector<vector<int>> ds;
    void sub(vector<int> &nums,int index,vector<int> temp,vector<vector<int>> &ds){
        
        if(index==nums.size())
        {
           ds.push_back(temp);
        }
        else{
            temp.push_back(nums[index]);
            sub(nums,index+1,temp,ds);
            temp.pop_back();
            
            sub(nums,index+1,temp,ds);
        }
    };
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ds;
        vector<int> temp;
        sub(nums,0,temp,ds);
        return ds;
    }
};
