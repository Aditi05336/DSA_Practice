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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh= height(root->left);
        int rh= height(root->right);
        int ans= 1+max(lh,rh);
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int val = height(root->left)-height(root->right);
        if(abs(val)<=1){
            return isBalanced(root->left)&& isBalanced(root->right);
        }
        return false;
    }
};