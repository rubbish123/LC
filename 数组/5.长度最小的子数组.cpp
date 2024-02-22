#include <vector>
#include <deque>
using namespace std;

// 注意res每次循环会被更新，所以要用global保存全局最小
// 以及这道题不用deque,双指针即可

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        deque<int> q;
        int tmp=0;
        int res=0;
        int glob=100010;
        for(int i=0;i<nums.size();i++){
            tmp+=nums[i];
            q.push_back(nums[i]);
            res++;
            if(tmp>=target){
                while((!q.empty())&&(tmp-q.front()>=target)){
                    tmp-=q.front();
                    q.pop_front();
                }
                int k=q.size();
                res=min(res,k);
                glob=min(glob,res);
            }
        }
        if(tmp<target){
            return 0;
        }
        return glob;
    }
};