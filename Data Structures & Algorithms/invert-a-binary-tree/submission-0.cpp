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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        queue<TreeNode*> qe;
        qe.push(root);
          while (!qe.empty()) {
        TreeNode* temp = qe.front();
        qe.pop();

        // swap left and right child
        TreeNode* t = temp->left;
        temp->left = temp->right;
        temp->right = t;

        if (temp->left) qe.push(temp->left);
        if (temp->right) qe.push(temp->right);
    }
        return root;
    }
};
