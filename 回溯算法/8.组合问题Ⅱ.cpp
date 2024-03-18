// 这道题难点在于结果集去重，具体看代码随想录解析

class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<int> &candidates,int target,int idx,vector<bool> &used){
        if(target==0){
            res.push_back(tmp);
            return;
        }sssss
        if(idx==candidates.size()||target<0){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx&&candidates[i-1]==candidates[i]&&used[i-1]==false){
                continue;
            }
            tmp.push_back(candidates[i]);
            used[i]=true;
            dfs(candidates,target-candidates[i],i+1,used);
            used[i]=false;
            tmp.pop_back();
        }
        // dfs(candidates,target,idx+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool> used(candidates.size(),false);
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,used);
        return res;
    }
};