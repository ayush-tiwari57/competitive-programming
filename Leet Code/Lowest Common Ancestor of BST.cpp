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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val > q->val) {
        auto tmp = p;
        p = q;
        q = tmp;
        }
        if(root==NULL) return 0;
        
        while(root!=NULL){
            if(p->val<=root->val && q->val>=root->val) return root;
            if(p->val<root->val)  root=root->left;
            else root=root->right;
        }
    return 0;
    }
};