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
     int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL)
            return 0;
            
        int temp = 0;
        if (root->left != NULL) {
            if (root->left->left == NULL && root->left->right == NULL)
                temp += root->left->val;
        }
        temp+=sumOfLeftLeaves(root -> left);
        temp+=sumOfLeftLeaves(root -> right);
        return temp;
         
    }
    
};
