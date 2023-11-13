class Solution {
public:
    string sortVowels(string s) {
        vector<char>c;
        vector<int>vec;
        
        for(int i=0;i<s.size();i++){
            char a=s[i];
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
                c.push_back(s[i]);
                vec.push_back(i);
            }
           
        }
        sort(c.begin(),c.end());
        for(int i=0;i<vec.size();i++){
            s[vec[i]]=c[i];
        }
        
        return s;
    }
};