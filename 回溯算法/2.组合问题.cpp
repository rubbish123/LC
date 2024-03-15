class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> res;
    void dfs(int n,int k,int idx){
        if(tmp.size()==k){
            res.push_back(tmp);
            return;
        }
        if(idx==n+1){
            return;
        }
        tmp.push_back(idx);
        dfs(n,k,idx+1);
        tmp.pop_back();
        dfs(n,k,idx+1);
    }
    vector<vector<int>> combine(int n, int k) {
        dfs(n,k,1);
        return res;
    }
};