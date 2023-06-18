// You are given a large integer represented as an integer array digits, 
// where each digits[i] is the ith digit of the integer. The digits are 
// ordered from most significant to least significant in left-to-right order. 
// The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0, sum;
        int itr = digits.size()-1;
        while(!flag){
            sum = digits[itr] + 1;
            digits[itr] = sum%10;
            if(sum == 10){
                itr--;
            }else{
                flag = 1;
            }
            if(itr == -1){
                digits.insert(digits.begin(), 1);
                flag = 1;
            }
        }
        return digits;
    }
};