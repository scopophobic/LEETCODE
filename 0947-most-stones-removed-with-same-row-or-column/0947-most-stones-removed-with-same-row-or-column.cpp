class Solution {
public:
    
    void dfs(int n, int it, vector<bool>&visit,vector<vector<int>>&st){
        
        
        visit[it]=true;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                if(st[i][0]==st[it][0])
                    dfs(n,i,visit,st);
                if(st[i][1]==st[it][1])
                    dfs(n,i,visit,st);
            }
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool>visit(n);
        int ans,temp=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                dfs(n,i,visit,stones);
                temp++;
            }
        }
        ans = n-temp;
        
        return ans;
    }
};