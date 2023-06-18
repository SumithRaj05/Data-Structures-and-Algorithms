// Given two binary strings a and b, return their sum as a binary string.

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        int i = max(m,n);
        string output;
        int carry = 0;

        if(m!=n){
            int minLen = min(m,n);
            for(int k=0; k<(i-minLen); k++){
                if(minLen == m){
                    a.insert(0, "0");
                }else{
                    b.insert(0,"0");
                }
            }
        }

        for(int j=i-1; j>=0; j--){
            if(a[j] == '0' && b[j] == '0'){
                if(carry == 0){
                    output.insert(0, "0");
                }else{
                    output.insert(0,"1");
                }
                carry = 0;
            }
            if(a[j] == '0' && b[j] == '1'){
                if(carry == 0){
                    output.insert(0,"1");
                    carry = 0;
                }else{
                    output.insert(0,"0");
                    carry = 1;
                }
            }
            if(a[j] == '1' && b[j] == '0'){
                if(carry == 0){
                    output.insert(0,"1");
                    carry = 0;
                }else{
                    output.insert(0,"0");
                    carry = 1;
                }
            }
            if(a[j] == '1' && b[j] == '1'){
                if(carry == 0){
                    output.insert(0,"0");
                }else{
                    output.insert(0,"1");
                }
                carry = 1;
            }
        }
        if(carry == 1){
            output.insert(0,"1");
        }
        return output;
    }
};