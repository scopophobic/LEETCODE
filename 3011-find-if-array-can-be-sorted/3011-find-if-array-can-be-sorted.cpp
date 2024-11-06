class Solution {
public:
    unsigned int setBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
    
    bool canSortArray(vector<int>& nums) {
        
        int n = nums.size();
        map<int,int>cbits;
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        if(temp == nums) return true;
        
        for(int i=0;i<n;i++){
            cbits[nums[i]] = setBits(nums[i]);
        }
        // for(int i=0;i<n;i++){
        //     if()
        // }
        for(int j=0;j<n*n;j++){
            for(int i=0;i<n-1;i++){
            // for(int j=i;j<n;j++){
            //     if(nums[i] > nums[j] and cbits[nums[j]] == cbits[nums[i]]){
            //         cout<<nums[i]<<" "<<nums[j]<<endl;
            //         swap(nums[i],nums[j]);
            //     }
            // }
                if(nums[i] > nums[i+1] and cbits[nums[i+1]] == cbits[nums[i]]){
                    // cout<<nums[i]<<" "<<nums[j]<<endl;
                    swap(nums[i],nums[i+1]);
                }
            }
        }

        if(temp == nums) return true;
        
        return false;
        
    }
};