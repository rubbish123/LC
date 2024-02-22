class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        if(root!=nullptr){
            q.push(root);
        }
        vector<int> res;
        while(!q.empty()){
            int size=q.size();
            while(size>1){
                TreeNode *tmp=q.front();
                q.pop();
                if(tmp->left!=nullptr){
                    q.push(tmp->left);
                }
                if(tmp->right!=nullptr){
                    q.push(tmp->right);
                }
                size--;
            }
            TreeNode *aaa=q.front();
            q.pop();
            res.push_back(aaa->val);
            if(aaa->left!=nullptr){
                q.push(aaa->left);
            }
            if(aaa->right!=nullptr){
                q.push(aaa->right);
            }
        }
        return res;
    }
};