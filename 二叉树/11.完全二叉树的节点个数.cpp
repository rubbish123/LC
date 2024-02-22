class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int s1=countNodes(root->left);
        int s2=countNodes(root->right);
        return s1+s2+1;
    }
};

// 遍历
int countNodes(TreeNode* root) {
    if(root==nullptr){
        return 0;
    }
    int res=0;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode *node=q.front();
        q.pop();
        res++;
        if(node->left!=nullptr){
            q.push(node->left);
        }
        if(node->right!=nullptr){
            q.push(node->right);
        }
    }
    return res;
}