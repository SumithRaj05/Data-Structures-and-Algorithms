// Given the root of a binary tree and an integer targetSum, 
// return true if the tree has a root-to-leaf path such that 
// adding up all the values along the path equals targetSum.

// A leaf is a node with no children.


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
    bool flag = false;
public:
    void checkPath(TreeNode* root, int target){
        if(root == nullptr){
            return;
        }

        if(target-(root->val) == 0 && root->left == nullptr && root->right == nullptr){
            flag = true;
            return;
        }
        
        checkPath(root->left, target-(root->val));
        checkPath(root->right, target-(root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        sum = targetSum;
        checkPath(root, targetSum);
        return flag;
    }
};