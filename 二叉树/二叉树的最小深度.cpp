class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int s1=minDepth(root->left);
        int s2=minDepth(root->right);
        if(s1==0||s2==0){
            return s1+s2+1;
        }
        return min(s1,s2)+1;
    }
};