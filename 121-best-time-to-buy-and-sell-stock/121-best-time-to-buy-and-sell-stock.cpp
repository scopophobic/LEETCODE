class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int max=0;
//         int n=prices.size();
//         int min=prices[0];
//         for (int i=0;i<n;i++){
//             if(min>prices[i]) min=prices[i];
//         }
//         int a;
//         for (int i = 0; i < prices.size(); i++)
//         {
//         if (prices[i] == min)
//         {
//             a=i;
//             break;
//         }
//         }
        
//         for(int i=a;i<n;i++){
//             if(max<prices[i]) max=prices[i];
//         }
        
//         int ans=max-min;
//         return ans;
        
        int maxpro=0;
        int minp=INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            minp = min(minp,prices[i]);
            maxpro= max(maxpro,prices[i]-minp);
        }
        return maxpro;
        
    }
};