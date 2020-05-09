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
    int findSecondMinimumValue(TreeNode* root) {
       long m = LONG_MAX,sm=LONG_MAX;
        dfs(root, m, sm);
        return sm == LONG_MAX? -1 : sm;
    }
    void dfs(TreeNode* root, long& m, long& sm){
        if(!root) return;
        if(root->val < m){
            sm = m;
            m = root->val;
        }
        else if(root->val < sm && root->val != m) sm = root->val;
        dfs(root->left, m, sm);
        dfs(root->right, m, sm);
    }
};