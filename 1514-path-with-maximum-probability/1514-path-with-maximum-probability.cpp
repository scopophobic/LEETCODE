// class Solution {
// public:
//     double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
//         vector<int>temp;
//         for(auto it : edges){
//             for(auto i : it){
//                 temp.push_back(i);
//             }
//         }
        
//         sort(temp.begin(),temp.end());
//         int a = temp[temp.size()-1]+1;
        
//         vector<vector<double>>admat(a,vector<double>(a,-1));
//         // cout<<"size : "<<a<<" "<<b<<endl;
        
//         int i = 0;
//         for(auto it : edges){
//             admat[it[0]][it[1]]=succProb[i];
//             i++;
//         }
        
//         for(auto it : admat){
//             for(auto i : it){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
        
        
//         return 1.000;
//     }
// };



#include <vector>
#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> graph(n);
        
        // Build the graph as an adjacency list
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            graph[u].emplace_back(v, prob);
            graph[v].emplace_back(u, prob);
        }
        
        // Max-heap to keep track of the highest probability path
        priority_queue<pair<double, int>> pq;
        vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;
        pq.emplace(1.0, start_node);
        
        while (!pq.empty()) {
            auto [prob, node] = pq.top();
            pq.pop();
            
            // If we reached the end_node, return the probability
            if (node == end_node) {
                return prob;
            }
            
            // Explore neighbors
            for (auto &[neighbor, edgeProb] : graph[node]) {
                double newProb = prob * edgeProb;
                if (newProb > maxProb[neighbor]) {
                    maxProb[neighbor] = newProb;
                    pq.emplace(newProb, neighbor);
                }
            }
        }
        
        // If end_node is not reachable, return 0
        return 0.0;
    }
};
