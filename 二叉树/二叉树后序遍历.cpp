class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode *tmp=s.top();
            if(tmp==nullptr){
                s.pop();
                continue;
            }
            /*
                因为后序遍历只有左右都遍历了才能输出当前节点
                因此左右都要作为判断条件，所以每次放完都要置为null
            */
            if(tmp->left!=nullptr){
                s.push(tmp->left);
                tmp->left=nullptr;
            }
            else if(tmp->right!=nullptr){
                s.push(tmp->right);
                tmp->right=nullptr;
            }
            else{
                res.push_back(tmp->val);
                s.pop();
            }
        }
        return res;
    }
};