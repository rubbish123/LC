class Solution {
public:
    TreeNode *f(vector<int> &nums,int l,int r){
        if(l>r){
            return nullptr;
        }
        int i=(l+r)/2;
        TreeNode *root=new TreeNode(nums[i]);
        root->left=f(nums,l,i-1);
        root->right=f(nums,i+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums,0,nums.size()-1);
    }
};