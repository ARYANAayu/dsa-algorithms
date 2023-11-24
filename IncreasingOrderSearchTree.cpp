class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(-1);
        TreeNode* curr = dummy;
        
        inorder(root, curr);
        
        return dummy->right;
    }
    
    void inorder(TreeNode* node, TreeNode*& curr) {
        if (node == nullptr) {
            return;
        }
        
        inorder(node->left, curr);
        
        curr->right = new TreeNode(node->val);
        curr = curr->right;
        
        inorder(node->right, curr);
    }
};
