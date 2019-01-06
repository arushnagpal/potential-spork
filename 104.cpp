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
    int maxDepth(TreeNode* root) {
        return findDepth(root,0);
    }
    
    
    int findDepth(TreeNode* root, int maxdepth){
        if(root==NULL)
            return maxdepth;
        return max(findDepth(root->left,maxdepth+1),findDepth(root->right, maxdepth+1));
    }
};