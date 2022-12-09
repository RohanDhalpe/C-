#include<bits/stdc++.h>
using namespace std;

void printSet(multiset<string>s){
    cout<<s.size()<<endl;
    for(auto value:s){
        cout<<value<<" ";
    }
}

int main(){
    multiset<string>s;
    s.insert("aaa");
    s.insert("bbb");
    s.insert("ccc");
    s.insert("aaa");//  insertion of multiple values  is allowed
    
   // s.erase("aaa");  //delete all occurances of aaa
  
  auto it=s.find("aaa");
  if(it!=s.find("aaa"))
  {
    cout<<" Not found"<<endl;
  }else{
    s.erase(it);    //delete single value where the iterator points
  }

    printSet(s);


    return 0;
} 