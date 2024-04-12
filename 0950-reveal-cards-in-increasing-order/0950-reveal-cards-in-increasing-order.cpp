class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        
        int n = deck.size();
        queue <int> qu;
        for(int i=n-1; i>=0;i--){
            if(!qu.empty()){
                qu.push(qu.front());
                qu.pop();
            }
            
            qu.push(deck[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            deck[i] = qu.front();
            qu.pop();
        }
        
        return deck;
        
        
    }
};