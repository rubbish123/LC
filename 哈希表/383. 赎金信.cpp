#include <string>
using namespace std;

/*
    用数组做map记录每个字符出现的次数就行了
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(auto tmp:magazine){
            arr[tmp-'a']++;
        }
        for(auto tmp:ransomNote){
            // 表示magazine中的字符不能构成ransomNote了
            if(arr[tmp-'a']==0){
                return false;
            }
            // 消耗掉一个字符
            arr[tmp-'a']--;
        }
        return true;
    }
};