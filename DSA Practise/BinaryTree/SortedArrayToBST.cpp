// Given an integer array nums where the elements are sorted in 
// ascending order, convert it to a 
// height-balanced binary search tree.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void split(vector<int>& arr, int s, int e, TreeNode** root){
        if(s>=e){
            return;
        }
        int mid = (s+e)/2;
        *root = new TreeNode(arr[mid]);
        split(arr, s, mid, &((*root)->left));
        split(arr, mid+1, e, &((*root)->right));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* head;
        split(nums, 0, n, &head);
        return head;
    }
};