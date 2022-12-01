class Solution {
public:
    
    bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U' ||ch=='a' || ch=='e' || ch=='i' ||
                       ch=='o' || ch=='u');
}
 
// Returns count of vowels in str
int vowel(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i])) // Check for vowel
            ++count;
    return count;
}
    
    
    bool halvesAreAlike(string s) {
        int n=s.length();
        string a="",b="";
        for(int i=0;i<n/2;i++){
            a+=s[i];
            b+=s[(n/2)+i];
        }
        int c1,c2;
        c1=vowel(a);
        c2=vowel(b);
        if(c1==c2) return true;
        else return false;
        // return true;
    }
   
};