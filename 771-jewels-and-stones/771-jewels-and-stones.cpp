class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(int i=0;i<stones.length();i++){
            for(char c:jewels)
                if(c==stones[i])
                    ans++;
        }
        return ans;
        
    }
};