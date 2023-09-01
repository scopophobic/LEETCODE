class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int val=i;
            int temp=0;
            while(val!=0){
                temp+=val%2;
                // if(val==2) temp++;
                val/=2;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};