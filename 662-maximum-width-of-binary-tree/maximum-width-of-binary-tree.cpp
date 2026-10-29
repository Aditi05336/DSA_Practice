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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        unsigned long long ans=0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int n= q.size();
            unsigned long long s= q.front().second;
            unsigned long long e= q.back().second;
            ans = max(ans,e-s+1);
            for(int i=0;i<n;i++){
                auto temp = q.front();
                q.pop();

                if(temp.first->left!=NULL){
                    q.push({temp.first->left, 2*temp.second+1});
                }
                if(temp.first->right!=NULL){
                    q.push({temp.first->right, 2*temp.second+2});
                }
            }


        }
        return ans;
        
    }
};