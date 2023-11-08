class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int s=sx-fx;
        int f=sy-fy;
        // cout<<s<<" "<<f;
        if(s<0)s*=-1;
        if(f<0)f*=-1;
        int temp = max(f,s);
        
        // cout<<temp;
        if(temp==0 and t==1) return false;
        if(temp>t) return false;
        else return true;
    }
};