// Given the root of a binary tree, check whether it is a mirror of 
// itself (i.e., symmetric around its center).


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
    vector<int> inorder;
    bool flag = true;
public:
    void inorderTraversal(TreeNode* p, TreeNode* q){
        if(p == nullptr && q == nullptr){
            return;
        }
        if(p != nullptr && q == nullptr){
            flag = false;
            return;
        }
        if(p == nullptr && q != nullptr){
            flag = false;
            return;
        }
        if(p->val != q->val){
            flag = false;
            return; 
        }
        if(!flag){
            return;
        }
        inorderTraversal(p->left, q->right);
        inorderTraversal(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        inorderTraversal(root->left, root->right);
        return flag;
    }
};