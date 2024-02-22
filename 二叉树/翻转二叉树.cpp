class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)
            return root;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left,root->right);
        return root;
    }
};

// 迭代版本
TreeNode* invertTree(TreeNode* root) {
    if(root==nullptr)
        return root;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()){
        TreeNode *node=s.top();
        s.pop();
        swap(node->left,node->right);
        if(node->left!=nullptr){
            s.push(node->left);
        }
        if(node->right!=nullptr){
            s.push(node->right);
        }
    }
    return root;
}