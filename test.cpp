#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string &trim(string &s){
    if(s.empty()){
        return s;
    }
    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}
string reverseWords(string s) {
    string real=trim(s);
    string res="";
    int end=s.size();
    bool flag=false;
    for(int i=s.size()-1;i>=0;i--){
        if(i==0){
            res+=s.substr(i,end);
            return res;
        }
        if(flag==false&&s[i]!=' '){
            end=i+1;
            flag=true;
            continue;
        }
        if(flag==true&&s[i]==' '){
            res+=s.substr(i+1,end-i-1);
            res+=" ";
            end=i;
            flag=false;
        }
    }
    return res;
}

int main(){
    string s="     the sky is blue  ";
    cout<<reverseWords(s)<<endl;
}