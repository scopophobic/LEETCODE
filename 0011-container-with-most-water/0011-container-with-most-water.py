class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans = 0
        n = len(height)
        i=0 
        j=n-1
        b=n-1
        while i<j :
            l=min(height[i],height[j])
            ans = max(ans,l*b)
            
            if (height[i]>height[j]) :
                j-=1
            elif (height[j]>height[i]):
                i+=1
            else :
                i+=1
                j-=1
                b-=1;
            
            
            b-=1;
        
        
        return ans;
            