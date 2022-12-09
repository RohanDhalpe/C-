#include<bits/stdc++.h>
using namespace std;

void printSet(set<string>s){
    cout<<s.size()<<endl;
    for(auto value:s){
        cout<<value<<" ";
    }
}

int main(){
    set<string>s;

    s.insert("aaa");
    s.insert("bbb");
    s.insert("ccc");
    s.insert("aaa");//  We cant insert multiple values  io set 

   // s.erase("aaa"); 

    printSet(s);


    return 0;
}