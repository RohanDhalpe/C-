#include<bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
   map<int,string> m;
   m[1]="aa";    //  insertion   o(log(n))
   m[2]="bb";
   m[3]="cc";
   m[4]="dd";
   m.insert({4,"rohan"});     //insert value;
   auto it=m.find(3);         //finding value
   
   if(it==m.end()){
     cout<<"Value not found;";
    }else{
     cout<<(*it).first<<" "<<(*it).second<<endl;
   }
    m.erase(4);
   print(m);
}