class Solution {
    int ans, temp;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        ans = 0, temp = 0;
        temp = DFSRecur(root);
        return ans;
    }
    
    int DFSRecur(TreeNode* root){
        if(root->right == NULL && root->left == NULL){
            return root->val;
        }
        if(root->left!=NULL){
            ans += DFSRecur(root->left);
        }
        if(root->right!=NULL){
            temp = DFSRecur(root->right);
        }
        return 0;
    }
};