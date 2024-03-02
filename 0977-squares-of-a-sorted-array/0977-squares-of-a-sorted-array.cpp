class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        
        for(auto it : nums){
            int pro = it * it;
            ans.push_back(pro);
        }
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};