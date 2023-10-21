class Solution {
public:
    void comsum(vector<int>& can, int t,int id,vector<int>temp,int sum,vector<vector<int>>&ans){
        if(sum==t){
            ans.push_back(temp);
            return;
        }
        if (sum > t || id == can.size()) {
            return;
        }

            
        
        temp.push_back(can[id]);
        comsum(can,t,id+1,temp,sum+can[id],ans);
        temp.pop_back();
        while (id + 1 < can.size() && can[id] == can[id + 1]) id++;
            
        comsum(can,t,id+1,temp,sum,ans);

        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        comsum(candidates,target,0,temp,0,ans);
        return ans;
    }
}; 