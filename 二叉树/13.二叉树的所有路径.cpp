/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void f(vector<string> &res,string path,TreeNode *node){
        string tmp=path;
        if(node->left==nullptr&&node->right==nullptr){
            path+=to_string(node->val);
            res.push_back(path);
            return;
        }
        if(node->left!=nullptr){
            path+=to_string(node->val);
            path+="->";
            f(res,path,node->left);
        }
        // 因为两个if都有可能走到，所以这一步是恢复现场
        path=tmp;
        if(node->right!=nullptr){
            path+=to_string(node->val);
            path+="->";
            f(res,path,node->right);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        f(res,"",root);
        return res;
    }
};