class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> res;
        s.push(root);
        while(!s.empty()){
            TreeNode *tmp=s.top();
            s.pop();
            if(tmp==nullptr){
                continue;
            }
            res.push_back(tmp->val);
            s.push(tmp->right);
            s.push(tmp->left);
        }
        return res;
    }
};