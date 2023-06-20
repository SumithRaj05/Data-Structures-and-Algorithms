// Given a binary tree, determine if it is 
// height-balanced


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
    bool flag = true;
public:
    void height(TreeNode* root, int &h){
        if(root == nullptr || !flag){
            return;
        }
        int lh=0, rh=0;
        height(root->left, lh);
        height(root->right, rh);
        h = max(lh, rh)+1;
        if(abs(lh-rh) > 1){
            flag = false;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int h = 0;
        height(root, h);
        return flag;
    }
};