class Solution {
public:
    double average(vector<int>& salary) {
        return (accumulate(begin(salary), end(salary), 0.) - *min_element(begin(salary), end(salary)) 
        - *max_element(begin(salary), end(salary))) / (salary.size() - 2);
    }
};