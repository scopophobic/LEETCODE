class Solution:
    def minSteps(self, n: int) -> int:
        
        INF = 10**20;
        
        def get_dp(curr,clip):
            if curr == n:
                return 0
            
            best = INF
            
            if curr != clip:
                best = min(best,get_dp(curr,curr)+1)
            if clip > 0 and curr + clip <= n:
                best = min(best, get_dp(curr + clip, clip)+1)
                
            return best
        
        
        return get_dp(1,0);
        