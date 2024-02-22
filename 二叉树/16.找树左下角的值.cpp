/*
    笨办法，先求出树的深度然后层序遍历
*/
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
    int findBottomLeftValue(TreeNode* root) {
        int height=maxDepth(root);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int j=0;j<height-1;j++){
                int size=q.size();
                for(int i=0;i<size;i++){
                    TreeNode *node=q.front();
                    q.pop();
                    if(node->left!=nullptr){
                        q.push(node->left);
                    }
                    if(node->right!=nullptr){
                        q.push(node->right);
                    }
                }
            }
            int res=q.front()->val;
            return res;
        }
        return 0;
    }
};