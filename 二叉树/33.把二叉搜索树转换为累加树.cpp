class Solution {
public:
    void f(TreeNode *root,int &tmp){
        if(root==nullptr){
            return;
        }
        f(root->right,tmp);
        root->val+=tmp;
        tmp=root->val;
        // cout<<root->val<<" ";
        f(root->left,tmp);
    }
    TreeNode* convertBST(TreeNode* root) {
        int tmp=0;
        f(root,tmp);
        return root;
    }
};