class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        if(root!=nullptr){
            q.push(root);
        }
        vector<double> res;
        while(!q.empty()){
            int size=q.size();
            long long mean=0;
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                mean+=node->val;
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            res.push_back((double)mean/size);
        }
        return res;
    }
};