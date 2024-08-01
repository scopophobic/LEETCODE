class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto it : details){
            // string age = "";
            // cout<<it[11]<<" "<<it[12]<<endl;
            int age = ((it[11]-'0')*10)+(it[12]-'0');
            // age = it[11]+it[12];
            cout<<age<<endl;
            if(age>60) ans++;
        }
        
        return ans;
    }
};