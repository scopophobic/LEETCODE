class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0 ; 
        int n=nums.size();
        int e= n;
        int mid;
        
        while(s<e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid;
            }
            else if (nums[mid]<target) {
                s=mid+1;
            }
        }
        return -1;
        
    }
};