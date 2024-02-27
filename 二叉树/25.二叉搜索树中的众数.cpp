class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
    void inorder(map<int,int> &m,TreeNode *node){
        if(node==nullptr){
            return;
        }
        inorder(m,node->left);
        m[node->val]++;
        inorder(m,node->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        map<int,int> m;
        inorder(m,root);
        vector<pair<int,int>> vec(m.begin(),m.end());
        sort(vec.begin(),vec.end(),cmp);
        res.push_back(vec[0].first);
        for(int i=1;i<vec.size();i++){
            if(vec[i].second==vec[0].second){
                res.push_back(vec[i].first);
            }
        }
        return res;
    }
};