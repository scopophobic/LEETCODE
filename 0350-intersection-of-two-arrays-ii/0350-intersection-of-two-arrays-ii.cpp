class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a(1001),b(1001);
        
        for(auto it : nums1) a[it]++;
        for(auto it : nums2) b[it]++;
        
        
        set<int> s;
        for(auto it : nums1) s.insert(it);
        vector<int>ans;
        for(auto it : s){
            if(b[it]!=0){
                int cn = min(a[it],b[it]);
                for(int i=0;i<cn;i++) ans.push_back(it);
            }
        }
        
        
        return ans;
    }
};