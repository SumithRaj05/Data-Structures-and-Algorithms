// Given two integers dividend and divisor, divide two 
// integers without using multiplication, division, and mod operator.

// The integer division should truncate toward zero, which 
// means losing its fractional part. For example, 8.345 would 
// be truncated to 8, and -2.7335 would be truncated to -2.

// Return the quotient after dividing dividend by divisor.

// Note: Assume we are dealing with an environment that could 
// only store integers within the 32-bit signed integer range: 
// [−231, 231 − 1]. For this problem, if the quotient is strictly 
// greater than 231 - 1, then return 231 - 1, and if the quotient 
// is strictly less than -231, then return -231.

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        bool carryFlag = 0;
        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
            carryFlag = 1;
        }
        long counter = 0;

        long a = labs(dividend);
        long b = labs(divisor);
        while(a >= b){
            long temp = b, mul = 1;
            while(temp << 1 <= a){
                temp <<= 1;
                mul <<= 1;
            }
            a -= temp;
            counter += mul;
        } 
        
        if(carryFlag){
            counter *= -1;
        }
        if(counter > INT_MAX){
            counter = INT_MAX;
        }else if(counter < INT_MIN){
            counter = INT_MIN;
        }
        return counter;
    }
};