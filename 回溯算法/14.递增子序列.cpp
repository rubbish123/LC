// 这道题nums不能排序，所以之前的去重方法不能用
// 在每层用set去重

class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<int>& nums,int idx){
        if(tmp.size()>=2){
            res.push_back(tmp);
        }
        if(idx>=nums.size()){
            return;
        }
        unordered_set<int> uset;
        for(int i=idx;i<nums.size();i++){
            if((!tmp.empty()&&nums[i]<tmp.back())||
            (uset.find(nums[i])!=uset.end())){
                continue;
            }
            uset.insert(nums[i]);
            tmp.push_back(nums[i]);
            dfs(nums,i+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        dfs(nums,0);
        return res;
    }
};