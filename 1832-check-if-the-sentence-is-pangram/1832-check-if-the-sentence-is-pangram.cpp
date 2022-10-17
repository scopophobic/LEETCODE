class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26];
        map<char,int> m;
        for(auto it : sentence){
            m[it]++;
        }
 
        for(int i = 0; i < 26; i++) arr[i] = 0; 
        for(auto it: m){
            arr[it.first - 'a'] = it.second;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                return false;
                break;
            }
            
        }
        return true;
    }
};