class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if(root!=nullptr){
            q.push(root);
        }
        vector<vector<int>> res;
        while(!q.empty()){
            int size=q.size();
            vector<int> tmp;
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                tmp.push_back(node->val);
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
};