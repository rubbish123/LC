#include <vector>
#include <unordered_map>
using namespace std;

/*
    思路：一共四个数组，拆成两个两个数组，先循环遍历前两个数组
    对两数之和出现的次数进行记录，然后遍历后两个数组，在map内
    查找0-(c+d)是否出现，如果出现就count+=m[0-(c+d)]
*/

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        int count=0;
        for(auto a:nums1){
            for(auto b:nums2){
                m[a+b]++;
            }
        }
        for(auto c:nums3){
            for(auto d:nums4){
                if(m.find(0-(c+d))!=m.end()){
                    count+=m[0-(c+d)];
                }
            }
        }
        return count;
    }
};