// The array-form of an integer num is an array representing 
// its digits in left to right order.

// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, 
// return the array-form of the integer num + k.


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int rem, sum;
        int n = num.size()-1;
        int carry = 0;
        while(k!=0){
            rem = k%10;
            if(n<0){
                if(carry){
                    rem++;
                    carry = 0;
                }
                if(rem > 9){
                    carry = 1;
                    rem = rem%10;
                }
                num.insert(num.begin(), rem);
            }else{
                sum = num[n]+rem;
                if(carry){
                    sum++;
                    carry = 0;
                }
                if(sum>9){
                    sum = sum%10;
                    carry = 1;
                }
                num[n] = sum;
            }
            k = k/10;
            n--;
        }
        while(n>=0 && carry){
            sum = num[n]+1;
            carry = 0;
            if(sum>9){
                carry = 1;
                sum = sum%10;
            }
            num[n] = sum;
            n--;
        }
        if(carry){
            num.insert(num.begin(), 1);
        }
        return num;
    }
};