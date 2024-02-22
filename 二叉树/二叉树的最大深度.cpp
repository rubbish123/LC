class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int s1=maxDepth(root->left);
        int s2=maxDepth(root->right);
        return max(s1,s2)+1;
    }
};