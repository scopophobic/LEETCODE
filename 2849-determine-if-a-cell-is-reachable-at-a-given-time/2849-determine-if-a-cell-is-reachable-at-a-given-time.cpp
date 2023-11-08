class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int s=abs(sx-fx);
        int f=abs(sy-fy);
        // cout<<s<<" "<<f;
        int temp = max(s,f);
        
        cout<<temp;
        if(temp==0 and t==1) return false;
        if(temp>t) return false;
        else return true;
    }
};