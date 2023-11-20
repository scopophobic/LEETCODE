class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g=0,p=0,m=0,Rg=-1,Rp=-1,Rm=-1;
        for(int i=0;i<garbage.size();i++){
            for(char ct : garbage[i]){
                if ( ct == 'M' ){
                    m++;
                    Rm=i;
                }
                else if (ct == 'P') {
                    p++;
                    Rp=i;
                } else if (ct == 'G') {
                    g++;
                    Rg=i;
                }
            }
        }
        int ans = g+p+m;
        // cout<<Rm<<" "<<Rg<<" "<<Rp;
        if(Rm>=0) for(int i=0;i<Rm;i++) ans+=travel[i];
        if(Rp>=0) for(int i=0;i<Rp;i++) ans+=travel[i];
        if(Rg>=0) for(int i=0;i<Rg;i++) ans+=travel[i];
        return ans;
    }
};