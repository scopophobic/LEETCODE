class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, n=height.size();
        int i=0,j=n-1;
        while(i<j){
            int b = j-i;
            int l = min(height[i],height[j]);
            ans = max(ans,b*l);
            
            if(height[i]<height[j]) i++;
            else j--;
                
        }
        return ans;
    }
};