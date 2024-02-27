class Solution {
public:
    void inorder(vector<int> &tmp,TreeNode *node){
        if(node==nullptr){
            return;
        }
        inorder(tmp,node->left);
        tmp.push_back(node->val);
        inorder(tmp,node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int res=0x3f3f3f3f;
        vector<int> v;
        inorder(v,root);
        for(int i=1;i<v.size();i++){
            res=min(res,v[i]-v[i-1]);
        }
        return res;
    }
};