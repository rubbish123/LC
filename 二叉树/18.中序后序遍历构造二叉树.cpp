class Solution {
public:
    unordered_map<int,int> pos;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++){
            pos[inorder[i]]=i;
        }
        return dfs(inorder,postorder,0,n-1,0,n-1);
    }
    TreeNode *dfs(vector<int> &inorder,vector<int> &postorder,
                int il,int ir,int pl,int pr){
        if(il>ir){
            return nullptr;
        }
        int k=pos[postorder[pr]];
        TreeNode *root=new TreeNode(postorder[pr]);
        root->left=dfs(inorder,postorder,il,k-1,pl,pl+k-1-il);
        root->right=dfs(inorder,postorder,k+1,ir,pl+k-1-il+1,pr-1);
        return root;
    }
};