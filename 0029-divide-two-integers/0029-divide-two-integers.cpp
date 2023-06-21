class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            // Handle division by zero error
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        
        long long a = abs(static_cast<long long>(dividend));
        long long b = abs(static_cast<long long>(divisor));
        long long q = a / b;
        
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        
        if (isNegative && q > INT_MAX) {
            // Handle negative overflow
            return INT_MIN;
        } else if (q > INT_MAX) {
            // Handle positive overflow
            return INT_MAX;
        }
        
        return isNegative ? -q : q;
    }
};