class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;
        for(auto it : arr){
            mp[it]++;
        }
        float n=arr.size();
        for(auto it : mp){
            float a = (it.second/n)*100;
            cout<<a;
            if(a>25){
                return it.first;
            }
        }
        return 0;
    }
};