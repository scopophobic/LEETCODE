class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            // vector<int>::iterator it;
            for(auto i=nums.begin();i!=nums.end();++i){
                if(*i==val){
                    nums.erase(i);
                    i--;
                }
            }
            return nums.size();
        }
    };