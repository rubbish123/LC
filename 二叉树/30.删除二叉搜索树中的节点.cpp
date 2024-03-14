class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){
            return nullptr;
        }
        if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else{
            if(root->left==nullptr){
                return root->right;
            }
            if(root->right==nullptr){
                return root->left;
            }
            TreeNode *node=root->right;
            while(node->left){
                node=node->left;
            }
            node->left=root->left;
            root=root->right;
        }
        return root;
    }
};