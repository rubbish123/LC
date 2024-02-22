class Solution {
public:
    unordered_set<int> s;
    void dfs(TreeNode *root,int sum){
        if(root==nullptr)
            return;
        if(root->left==nullptr&&root->right==nullptr){
            s.insert(sum+root->val);
            return;
        }
        dfs(root->left,sum+root->val);
        dfs(root->right,sum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
            return false;
        dfs(root,0);
        return s.count(targetSum);
    }
};