class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
       if(nums1.size()) for(auto it : nums1) ans.push_back(it);
       if(nums2.size()) for(auto it : nums2) ans.push_back(it);
       sort(ans.begin(), ans.end());
       
       int n = ans.size();
       if(n % 2 == 0){
           double a = (double)(ans[n/2 - 1] + ans[n/2])/2;
           return a;
       } else {
           return (double)ans[n/2];
       }
    }
};
