class Solution {
public:
    void comsum(vector<int>& can, int t,int id,vector<int>&temp,int sum,vector<vector<int>>&ans){
        if(sum==t){
            ans.push_back(temp);
            return;
        }
        
        else if(sum>t){
            return;
        }
        for(int i=id;i<can.size();i++){
            if(i != id && can[i]==can[i-1])               
                continue;
            sum+=can[i];
            temp.push_back(can[i]);
            comsum(can,t,i+1,temp,sum,ans);
            sum-=can[i];
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        comsum(candidates,target,0,temp,0,ans);
        return ans;
    }
}; 