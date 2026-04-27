
class Solution {
public: vector<int> res;    
public:
  void helper(TreeNode* root) {
       
       if (root == NULL)
            return;

        helper(root->left);
        res.push_back(root->val);
        helper(root->right);

    }
    vector<int> inorderTraversal(TreeNode* root) {
       
      helper(root);

        return res;

    }
};