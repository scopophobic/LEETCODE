class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int s=sx-fx;
        int f=sy-fy;
        // cout<<s<<" "<<f;
        if(s<0)s*=-1;
        if(f<0)f*=-1;
        if(s>f) f=s;
        // cout<<temp;
        if(f==0 and t==1) return false;
        if(f>t) return false;
        else return true;
    }
};