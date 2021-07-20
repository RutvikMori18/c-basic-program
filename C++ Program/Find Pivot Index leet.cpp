class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();//3
        for(int i=0; i<n; i++){//3
            sum = sum+nums[i];//1
        }
        int l=0;
        for(int i=0; i<n; i++){
            if(l == sum-l-nums[i]){
                return i;
            }
            l = l+nums[i];
        }
        return -1;
    }
};
