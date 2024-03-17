class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<int> &candidates,int target,int idx){
        if(idx==candidates.size()){
            return;
        }
        if(target==0){
            res.push_back(tmp);
            return;
        }
        /*
            针对可重复选择，使用xuan'yu'bu'xuan
        */
        dfs(candidates,target,idx+1);
        if(target-candidates[idx]>=0){
            tmp.push_back(candidates[idx]);
            dfs(candidates,target-candidates[idx],idx);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(candidates,target,0);
        return res;
    }
};