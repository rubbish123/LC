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
    bool isValidBST(TreeNode* root) {
        vector<int> res;
        inorder(res,root);
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1]){
                return false;
            }
        }
        return true;
    }
};