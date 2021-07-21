class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeInterval;
    
        if(intervals.size()==0){
            return mergeInterval;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        
        for(auto x:intervals){
            if(x[0]<= tempInterval[1]){
                tempInterval[1] = max(x[1],tempInterval[1]);
            }else{
                mergeInterval.push_back(tempInterval);
                tempInterval = x;
            }
        }
        mergeInterval.push_back(tempInterval);
        return mergeInterval;
    }
};
