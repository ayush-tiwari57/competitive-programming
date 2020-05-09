/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void recur (TreeNode* root, int& r, int& m) {
        if (!root) return;
        recur(root->left, r,m);
        if (abs(root->val-r) < m) {
            m = abs(root->val-r);
        }
        r = root->val;
        recur(root->right, r, m);
    }
    int getMinimumDifference(TreeNode* root) {
        int r=INT_MAX,m=INT_MAX;
        recur(root, r, m);
        return m;
    }
};