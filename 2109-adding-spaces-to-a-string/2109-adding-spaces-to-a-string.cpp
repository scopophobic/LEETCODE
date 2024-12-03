class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        
//         string temp = s;
//         string ans;
//         int i = 0;
//         for(auto it : spaces){

//             string post = temp.substr(it+i,temp.size());
//             string pre = temp.substr(0,it+i);
            

//             temp = "";
//             temp += pre;
//             temp += " ";
//             temp += post;
//             i++;
//         }
        

//         s = temp;
//         return s;
        int M = s.size(), N = sp.size(), l = 0, r = 0;
 
    string res(M + N, ' ');
 
    // Iterate over M+N length
    for (int i = 0; i < M + N; i++) {
 
        if (l < N and i == sp[l] + l)
            l++;
        else
            res[i] = s[r++];
    }
 
    // Return the required string
    return res;
    }
};