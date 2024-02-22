class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a[1005]={0};
        for(int i=2;i<=cost.size();i++){
            a[i]=min(cost[i-1]+a[i-1],cost[i-2]+a[i-2]);
        }
        return a[cost.size()];
    }
};