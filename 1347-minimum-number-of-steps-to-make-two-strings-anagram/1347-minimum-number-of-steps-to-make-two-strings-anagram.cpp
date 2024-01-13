class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp1,mp2;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        
        // for(auto it,ip : mp1,mp2){
        //     cout<<it.first<<" "<<it.second<<endl;
        //     cout<<ip.first<<" "<<ip.second<<endl;
        // }
        int ans=0;
        for (auto [key1, value1] : mp2) {
            auto [key2, value2] = *mp1.find(key1);
        
            // std::cout << "Map 2: " << key1 << " " << value1 << std::endl;
            // std::cout << "Map 1: " << key2 << " " << value2 << std::endl;
            cout<<value1-value2<<endl;
            ans+= ((value1-value2)>0) ? value1-value2 : 0;
        }
        
        return ans;
        
    }
};