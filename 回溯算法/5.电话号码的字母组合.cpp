class Solution {
public:
    vector<string> res;
    string tmp;
    unordered_map<int,string> m={
        {2,"abc"},
        {3,"def"},
        {4,"ghi"},
        {5,"jkl"},
        {6,"mno"},
        {7,"pqrs"},
        {8,"tuv"},
        {9,"wxyz"}
    };
    void dfs(const string &digits,int index){
        if(tmp.size()==digits.size()){
            res.push_back(tmp);
            return;
        }
        char c=digits[index];
        string s=m[c-'0'];
        for(auto kkk:s){
            tmp.push_back(kkk);
            dfs(digits,index+1);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return res;
        }
        dfs(digits,0);
        return res;
    }
};