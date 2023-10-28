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
    void traversal(TreeNode* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        traversal(root->left,v);
        v.push_back(root->val);
        traversal(root->right,v);

    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        traversal(root,ans);
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]<=ans[i]){
                return false;
            }
        }
        return true;
    }
};
