class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        for (int i = sandwiches.size() - 1; i >= 0; i--) {
            s.push(sandwiches[i]);
        }
        for (auto it : students) {
            q.push(it);
        }

        int c = 0;
        while (!s.empty()) {
            int flag = 0;
            int prev = s.top();
            while (!q.empty() && q.front() != prev) {
                int a = q.front();
                q.pop();
                q.push(a);
                c++;
                if (c >= q.size()) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
            s.pop();
            q.pop();
      
            c = 0;
        }
        return q.size();
    }
};
