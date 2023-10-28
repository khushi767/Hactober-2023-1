/*
Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).
Example 1:
Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]
Example 2:
Input: root = [1,2,3]
Output: [1,3]
Constraints:

The number of nodes in the tree will be in the range [0, 10^4].
-2^31 <= Node.val <= 2^31 - 1

*/

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
 /*
 using dfs
t.c=n
s.c=o(depth)
 */
class Solution 
{
public:
vector<int>res;
void dfs(TreeNode* root,int depth)
{
    if(root==NULL)
    return;
    if(depth==res.size())
    {
        res.push_back(root->val);
    }
    else
    {
        res[depth]=max(res[depth],root->val);
    }
    dfs(root->left,depth+1);
    dfs(root->right,depth+1);
}
    vector<int> largestValues(TreeNode* root) 
    {
    dfs(root,0);
        return res;
    }
};