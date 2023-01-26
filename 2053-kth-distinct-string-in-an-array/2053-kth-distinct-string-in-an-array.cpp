class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        for(int i=0;i<arr.size();i++) map[arr[i]]++;
        auto count = 0;
        for(auto i:arr){
            if(map[i] == 1){
                count++;
                // if(k!=1) k--;
                if(count == k){
                    string str = i;
                    return str;
                }
            }
        }
        return "";
    }
};