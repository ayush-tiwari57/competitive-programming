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
    int sum=0;
    int sumRootToLeaf(TreeNode* root,int num=0) {
        if(!root) return 0;
        num*=2;
        num+=root->val;
        if(!root->left && !root->right) sum+=num;
        sumRootToLeaf(root->left,num);
        sumRootToLeaf(root->right,num);
        return sum;
    }
};