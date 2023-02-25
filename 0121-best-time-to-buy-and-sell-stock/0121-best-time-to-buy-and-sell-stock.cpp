class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,minp=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minp = min(minp,prices[i]);
            maxi=max(maxi,prices[i]-minp);
        }
        return maxi;
    }
};