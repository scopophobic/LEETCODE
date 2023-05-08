class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        for(int i = 0 ;i< nums1.size();i++){
            stack <int>s;
            for(auto it:nums2) s.push(it);
            int max=-1;
            while(nums1[i]!=s.top()){
                if(max<s.top() or s.top()>nums1[i]) max=s.top();
                s.pop();
            }
            if(max>nums1[i]) ans.push_back(max);
            else ans.push_back(-1);
            
        }
        return ans;
    }
};