class Solution {
public:
    
    void sumTar(int ind,vector<int>&can,vector<int>&temp,int target,vector<vector<int>>&ans,int n){
        if(ind>=n){
            if(target==0) ans.push_back(temp);
            return;
        }
        if(can[ind]<=target){
        temp.push_back(can[ind]);
        sumTar(ind,can,temp,target-can[ind],ans,n);
        temp.pop_back();
        }
        sumTar(ind+1,can,temp,target,ans,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();
        sumTar(0,candidates,temp,target,ans,n);
        return ans;
    }
};