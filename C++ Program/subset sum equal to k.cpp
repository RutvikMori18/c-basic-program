class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0;
        int count = 0;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            s += nums[i];
            if(s == k){
                count++;
            }
            if(m.find(s-k)!=m.end()){
                count += m[s-k];
            }
            m[s]++;
        }
        return count;
    }
};
