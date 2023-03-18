
// You are given an integer array height of length n. 
// There are n vertical lines drawn such that the two 
// endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, 
// such that the container contains the most water.
// Return the maximum amount of water a container can store.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = INT_MIN, area;
        int low = 0;
        int high = height.size()-1;
        while(low<high){
            area = min(height[high],height[low])*(high-low);
            maxArea = max(maxArea, area);
            (height[high]>height[low])?low++:high--;
        }
        return maxArea;
    }
};