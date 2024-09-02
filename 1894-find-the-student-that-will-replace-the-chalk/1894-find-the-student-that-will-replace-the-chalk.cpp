class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int t = k;

        int n = chalk.size();
        long long int sum = 0;
        
        for(auto it : chalk) sum+=it;
        cout<<sum;
        while(t>0){
            if(t-sum < 0){
                for(int j=0;j<n;j++){
                    if(t-chalk[j] < 0) return j;
                    t-=chalk[j];
                }
            }
            t-=sum;

        }
        
        return 0;
    }
};