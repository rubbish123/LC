class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums,0,nums.size()-1);
    }
    TreeNode *dfs(vector<int> &nums,int l,int r){
        if(l>r){
            return nullptr;
        }
        int Max=nums[l];
        int maxIndex=l;
        for(int i=l;i<=r;i++){
            if(nums[i]>Max){
                Max=nums[i];
                maxIndex=i;
            }
        }
        TreeNode *root=new TreeNode(Max);
        root->left=dfs(nums,l,maxIndex-1);
        root->right=dfs(nums,maxIndex+1,r);
        return root;
    }
};