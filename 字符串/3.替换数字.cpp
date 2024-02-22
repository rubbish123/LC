#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    string tmp="number";
    for(auto item:s){
        if(item>='a'&&item<='z'){
            cout<<item;
            continue;
        }
        cout<<tmp;
    }
    return 0;
}