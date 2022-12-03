class Solution {
public:
    struct comp
    {
        template<typename T>
        bool operator()(const T &l, const T &r) const
        {
            if (l.second != r.second) {
                return l.second > r.second;
            }
            return l.first < r.first;
        }
    };
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        string n="";
        
        set<pair<char,int>, comp> set (m.begin(), m.end());
        for (auto const &pair: set) {
        std::cout << '{' << pair.first << "," << pair.second << '}' << std::endl;
    }
        for(auto it : set){
            for(int i=0;i<it.second;i++){
                n+=it.first;
            }
        }
        
        
        return n;
    }
};