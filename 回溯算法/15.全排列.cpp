// 使用map记录元素有没有被使用过

class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<int>& nums,int idx,unordered_map<int,bool>& m){
        if(idx>=nums.size()){
            res.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==false){
                tmp.push_back(nums[i]);
                m[nums[i]]=true;
                dfs(nums,idx+1,m);
                m[nums[i]]=false;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,bool> m;
        for(int i=0;i<nums.size();i++){
            m.insert({nums[i],false});
        }
        dfs(nums,0,m);
        return res;
    }
};