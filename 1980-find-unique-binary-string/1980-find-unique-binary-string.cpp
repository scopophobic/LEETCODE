class Solution {
public:
    long long int binary(string s){
        int j = 0;
        long long int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '1'){
                ans += pow(2, j);
            }
            j++;
        }
        return ans;
    }

    string intToBinary(int n,int no) {
        if (n == 0) return "0";

        const int numBits = no; 
        string s(numBits, '0'); 

        int i = numBits - 1; 

        while (n > 0) {
            s[i--] = (n % 2) + '0';
            n /= 2;
        }

        return s;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = pow(2, nums.size());
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            long long int bin = binary(nums[i]);
            s.insert(bin);
        }
        string ans(nums.size(),'0');
        for (int i = 0; i < n; i++) {
            if (s.find(i) == s.end()) {
                if(i==0) return ans;
                return intToBinary(i,nums.size());
            }
        }
        return "";
    }
};
