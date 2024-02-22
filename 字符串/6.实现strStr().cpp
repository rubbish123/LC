#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int ne[10010];
        ne[0]=-1;
        for(int i=1,j=-1;i<needle.size();i++){
            while(j!=-1&&needle[i]!=needle[j+1]){
                j=ne[j];
            }
            if(needle[i]==needle[j+1]){
                j++;
            }
            ne[i]=j;
        }
        for(int i=0,j=-1;i<haystack.size();i++){
            while(j!=-1&&haystack[i]!=needle[j+1]){
                j=ne[j];
            }
            if(haystack[i]==needle[j+1]){
                j++;
            }
            if(j==needle.size()-1){
                return i-j;
            }
        }
        return -1;
    }
};