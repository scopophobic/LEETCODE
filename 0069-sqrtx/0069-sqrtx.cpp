class Solution {
public:
    int mySqrt(int x) {
        if(x<=0) return x;
        long long int low=1;
        long long int hi=x-1;  //x=10
        long long int mid;   //1 2 3 4 5 6 7 8 9 10
        while(low<=hi){
            mid=(hi+low)/2;
            long long int j=mid*mid;
            if(j==x) {
                return mid;
            }
            
            if(j>x){
                hi=mid-1;
            } 
            else {
                low=mid+1;
            }
        }
        if(low*low<=x) return low;
        else return hi;
    }
};