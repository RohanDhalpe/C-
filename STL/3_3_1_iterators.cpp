#include<bits/stdc++.h>
using namespace std;
  
int main(){
    vector<int> v={1,2,3,4,5};
    for(auto it=v.begin();it!=v.end();it++){
         cout<<(*it)<<" ";
    }
    cout<<endl;
    for(int value :v){
        value++;
        cout<<value<<" ";
        //value copies
    
    } 
    cout<<endl;
    for(int &value :v){
        value++;
        cout<<value<<" ";
      

    }
    return 0;
}