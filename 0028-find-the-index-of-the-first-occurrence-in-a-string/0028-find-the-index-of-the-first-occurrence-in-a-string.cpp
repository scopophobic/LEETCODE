class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=0,ans=-1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                int index=i;
                ans=i;
                for(int j=0;j<needle.size();j++){
                    cout<<flag<<" ";
                    if(haystack[index]==needle[j]) flag=1;
                    else{
                        flag=0;
                        break;
                    }
                    index++;
                }
                cout<<endl<<" "<<ans<<endl;
                if(flag==1) break;
            }
        }
        if(flag) return ans;
        
        else return -1;
    }
};