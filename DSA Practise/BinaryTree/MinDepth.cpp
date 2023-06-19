// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along 
// the shortest path from the root node down to 
// the nearest leaf node.

// Note: A leaf is a node with no children.

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
    int minD = INT_MAX;
public:
    void depth(TreeNode* root, int c){
        if(root == nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            if(c < minD){
                minD = c;
            }
            return;
        }
        depth(root->left, c+1);
        depth(root->right, c+1);
    }
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        depth(root, 0);
        return minD+1;
    }
};