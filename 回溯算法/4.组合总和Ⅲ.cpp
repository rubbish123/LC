class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> res;
    void dfs(int k,int n,int idx){
        if(tmp.size()==k&&n==0){
            res.push_back(tmp);
            return;
        }
        if(idx>9){
            return;
        }
        tmp.push_back(idx);
        dfs(k,n-idx,idx+1);
        tmp.pop_back();
        dfs(k,n,idx+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>=n){
            return res;
        }
        dfs(k,n,1);
        return res;
    }
};