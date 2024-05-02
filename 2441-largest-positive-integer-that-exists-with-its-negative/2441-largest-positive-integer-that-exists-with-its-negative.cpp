class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>neg,pos;
        
        for(auto it : nums){
            if(it > 0 ) pos.push_back(it);
            else neg.push_back(it*-1);
        }
        
        sort(neg.begin(),neg.end());
        sort(pos.begin(),pos.end());
        // reverse(neg.begin(),neg.end());
        reverse(pos.begin(),pos.end());
        
        
        for(auto it : pos){
            cout<<it<<endl;
            if(binary_search(neg.begin(), neg.end(), it)){
                return it;
            }
        }
        
        
        
        
        return -1;
        

        
    }
};