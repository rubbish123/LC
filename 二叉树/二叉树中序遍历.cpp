class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode *tmp=s.top();
            if(tmp==nullptr){
                s.pop();
                continue;
            }
            if(tmp->left!=nullptr){
                s.push(tmp->left);
                // 因为要用left来做判断，所以把left放进去之后一定置为null，不然重复判断死循环
                tmp->left=nullptr;
            }
            else{
                res.push_back(tmp->val);
                s.pop();
                s.push(tmp->right);
            }
        }
        return res;
    }
};