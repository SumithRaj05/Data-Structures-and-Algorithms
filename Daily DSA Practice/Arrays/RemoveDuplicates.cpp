class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> output;
        for(int i: nums){
            output.insert(i);
        }
        int n = output.size();
        auto it = output.begin();
        for(int i=0; i<n; i++){
            nums[i] = *it;
            it++;
        }
        return n;
    }
};