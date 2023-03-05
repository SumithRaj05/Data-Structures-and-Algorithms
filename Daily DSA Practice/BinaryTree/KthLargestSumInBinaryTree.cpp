// LeetCode Contest

// You are given the root of a binary tree and 
// a positive integer k.
// The level sum in the tree is the sum of the 
// values of the nodes that are on the same level.
// Return the kth largest level sum in the tree 
// (not necessarily distinct). If there are fewer than 
// k levels in the tree, return -1.
// Note that two nodes are on the same level if they 
// have the same distance from the root.

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
    void Traverse(TreeNode* root, int level, unordered_map<int,long long> &sums){
        if(root == NULL){
            return;
        }
        sums[level] += (root->val);
        Traverse(root->left, level+1, sums);
        Traverse(root->right, level+1, sums);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        unordered_map<int,long long> sums;
        vector<long long> ans;
        Traverse(root, 1, sums);
        for(auto i:sums){
            ans.push_back(i.second);
        }
        sort(ans.begin(),ans.end(), [](long long a, long long b){
            return a>b;
        });
        if(ans.size()<k)
                return -1;
        return ans[k-1];
    }
};