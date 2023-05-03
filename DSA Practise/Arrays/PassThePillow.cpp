// Leetcode Contest


// There are n people standing in a line labeled 
// from 1 to n. The first person in the line is holding 
// a pillow initially. Every second, the person holding 
// the pillow passes it to the next person standing in 
// the line. Once the pillow reaches the end of the line, 
// the direction changes, and people continue passing the 
// pillow in the opposite direction.
// For example, once the pillow reaches the nth person they 
// pass it to the n - 1th person, then to the n - 2th person and so on.
// Given the two positive integers n and time, return the 
// index of the person holding the pillow after time seconds.

class Solution {
public:
    int passThePillow(int n, int time) {
        int count = 1;
        if(n==time){
            return n-1;
        }
        if(n>time){
            for(int i=0; i<time; i++){
                count++;
            }
        }
        else if(n<time){
            bool isReverse = false;
            for(int i=0; i<time; i++){
                if(!isReverse){
                    count++;
                }else{
                    count--;
                }
                if(count==1 || count==n){
                    isReverse = !isReverse;
                }
            }
        }
        return count;
    }
};