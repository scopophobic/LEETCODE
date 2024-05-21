class Solution {
public:
    
    void solve(vector<int>& arr, int n, set<vector<int> >& ans,vector<int> v, int i)
    {
        if (i >= n) {
        ans.insert(v);
        return;
        }
 
    // Not pick
    solve(arr, n, ans, v, i + 1);
 
    // Pick
    v.push_back(arr[i]);
    solve(arr, n, ans, v, i + 1);
        
}
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>v;
        vector<vector<int>>res;
        solve(nums,nums.size(),ans,v,0);
        
        
        
        // s.insert({2,4});
        // s.insert({2,4});
        
        for(auto it : ans){
            vector<int>temp;
            for(auto f : it){
                temp.push_back(f);
            }
            res.push_back(temp);
        }
        
        
        
        return res;
    }
};