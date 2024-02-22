class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        if(root!=nullptr){
            q.push(root);
        }
        vector<int> res;
        while(!q.empty()){
            int size=q.size();
            int tmp=-2147483648;
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                tmp=max(tmp,node->val);
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