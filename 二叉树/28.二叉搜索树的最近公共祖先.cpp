/*
    虽然用26的代码也能过这个题，但是因为是二叉搜索树，所以利用下二叉搜索树的性质
    根据要搜查的节点和根节点的大小关系来有选择地搜查左右子树
*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val>p->val&&root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val<p->val&&root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};