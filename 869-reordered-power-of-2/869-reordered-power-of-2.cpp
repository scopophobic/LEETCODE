class Solution {
public:
    vector<int> count(int N){
        vector<int> ans(10);
        while(N){
            ans[N%10]++;
            N /= 10;
        }
        return ans;
    };
    
    bool reorderedPowerOf2(int N) {
        vector<int> arr = count(N);
        //pow(2,30) is 1073741824
        //and N's upper bound is pow(10,9)
        for(int i = 0; i < 31; i++){
            if(arr == count(1 << i)){
                return true;
            }
        }
        return false;
    }
};