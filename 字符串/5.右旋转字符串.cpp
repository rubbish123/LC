#include <iostream>
#include <string>

using namespace std;

int main(){
    int k;
    string s;
    cin>>k;
    cin>>s;
    for(int i=s.length()-k;i<s.length();i++){
        cout<<s[i];
    }
    for(int i=0;i<s.length()-k;i++){
        cout<<s[i];
    }
    return 0;
}