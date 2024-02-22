#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        int b[26]={0};
        for(auto tmp:s){
            a[tmp-'a']++;
        }
        for(auto tmp:t){
            b[tmp-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};