class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1, i=0,c=0,ind = -1;
        for(auto it : nums){
            if(it == 0){
                c++;
                ind = i;
                i++;
                continue;
            }
            pro *= it;
            i++;
            
        }
        if(c==0){
        vector<int>ans;
        for(auto it : nums){
            int temp = pro/it;
            ans.push_back(temp);
            
        }
            return ans;
        }
        vector<int>zero(nums.size(),0);
        if(c==1){
            zero[ind] = pro;
            return zero;
        }
        if(c>=2){
            return zero;
        }
        return {};
    }
};