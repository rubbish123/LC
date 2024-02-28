class Solution {
public:
    void insert(TreeNode *node,int val){
        if(node->val<val&&node->right==nullptr){
            node->right=new TreeNode(val);
            return;
        }
        if(node->val<val&&node->right!=nullptr){
            return insert(node->right,val);
        }
        if(node->val>val&&node->left==nullptr){
            node->left=new TreeNode(val);
            return;
        }
        if(node->val>val&&node->left!=nullptr){
            return insert(node->left,val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            return new TreeNode(val);
        }
        insert(root,val);
        return root;
    }
};