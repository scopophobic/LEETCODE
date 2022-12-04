class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
//         int n=nums.size();
//         int min=numeric_limits<int>::max();
//         int k=1;
//         vector<int>ans;
//         int old=numeric_limits<int>::max();
//         map<int,int>m;
//         for(int i=0;i<n;i++){
//             int s1=0,s2=0;
//             for(int j=0;j<=i;j++){
//                 s1+=nums[j];
//             }
//             for(int j=i+1;j<n;j++){
//                 s2+=nums[j];
            
//             }
//             // cout<<s1<<" "<<s2<<endl;
//             s1/=k;
//             if((k-n)==0) s2=0;
//             else s2/=n-k;
//             cout<<s1<<" "<<s2<<endl;
//             int a=abs(s1-s2);
//             cout<<min<<endl;
//             if (min>a) {
//                 min=a;
//                 int out=k;
//                 if(out<old) old=out;
//                 // ans.push_back(i);
//             }
//             k++;
//         }
//         // sort(ans.begin(), ans.end());
//         return old;
        
        
        
        int n=nums.size();
        if(n==1)    return 0;
        long long int pre[n];
        pre[0]=nums[0];
        
        for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];
        
        long long min=INT_MAX;
        int ind=0;
        
        for(int i =1;i<n;i++){
            int k=(abs(pre[i-1]/i-(pre[n-1]-pre[i-1])/(n-i)));
            if(min>k){ 
                min=k;
                ind=i-1;
            }
        }
        if(min>abs(pre[n-1]/n)){
        min=abs(pre[n-1]/n);
        ind=n-1;
    }
        return ind;
        
    
    }
};