class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>dup = strs;
        int n = strs.size();
        map<string,vector<string>>mp;
        for(int i = 0; i <n ;i++){
            sort(strs[i].begin(), strs[i].end());
            // cout<<strs[i]<<" ";
            mp[strs[i]].push_back(dup[i]);
            // dup.push_back(temp);
            
        }
        

//         for(auto it : dup){
//             cout<<it <<" ";
//         }
        
// cout<<endl;
//         for(auto it : strs){
//             cout<<it <<" ";
//         }
        vector<vector<string>>ans;
        for(auto it : mp){
            vector<string>temp;
            for(auto jt : it.second){
                temp.push_back(jt);
            }
            ans.push_back(temp);
        }

        
//         for(int i=0;i<n-1;i++){
//             vector<string>temp;
//             if(strs[i]==strs[i+1]){
//             while(strs[i]==strs[i+1]){
//                 temp.push_back(mp[strs[i]]);
//             }
//             }
//             else{
//                 temp.push_back(mp[strs[i]]);
//             }
            
//             ans.push_back(temp);
//         }
        // return {{""}};
        return ans;
    }
};