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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        printInorderTraversal(root);
        return ans;
    }
    
    void printInorderTraversal(TreeNode* root){
        if(root==NULL){
            return;
        }
        printInorderTraversal(root->left);
        ans.push_back(root->val);
        printInorderTraversal(root->right);
    }
};