class Solution {
public:
    int pivotInteger(int n) {
        // return 0;
        int to = 0; 
        for(int i=1;i<=n;i++) to+=i;
        int i=n;
        int reto = n;
        cout<<to<<" "<<reto<<endl;
        while(i>0){
            
            
            if(to==reto) {
                return i;

            }
            to-=i;
            reto+=i-1;
            
            cout<<to<<" "<<reto<<endl;
            i--;
            
            
        }
        
        return -1;
    }
};