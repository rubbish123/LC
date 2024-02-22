class Solution {
public:
    int ans=0;
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> q;
        int res=0;
        q.push(root);
        while(!q.empty()){zuoyezijiedian
            TreeNode *node=q.front();
            q.pop();
            // 判断是不是左叶子节点
            if(node->left!=nullptr&&node->left->left==nullptr&&node->left->right==nullptr){
                res+=node->left->val;
            }
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
        }
        return res;
    }
};