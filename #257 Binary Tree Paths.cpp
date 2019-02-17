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
    void treeTraversal(TreeNode* node, string temp, vector<string> &result) {

            temp += "->";
            temp += to_string(node -> val);
            if (node -> left != NULL) {
                treeTraversal(node -> left, temp, result);
            }
            if (node -> right != NULL) {
                treeTraversal(node -> right, temp, result);
            }
            if (node -> left == NULL && node -> right == NULL) {
                result.push_back(temp);
            }
        

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result = {};

        if (root == NULL)
            return result;
        if (root -> left == NULL && root -> right == NULL) {
            result.push_back(to_string(root -> val));
            return result;
        }

        string temp = to_string(root -> val);
        if (root -> left != NULL) {
            treeTraversal(root -> left, temp, result);
        }
        if (root -> right != NULL) {
            treeTraversal(root -> right, temp, result);
        }
        return result;
    }
};
