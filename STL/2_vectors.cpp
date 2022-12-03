#include<bits/stdc++.h>
using namespace std;

  //for printing vector
  void printVector(vector<int> p)
  {  for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
  }  

int main(){
    vector<int>p;
//     int x;
    
//     //for inserting element to vector
//      cin>>x;
//      p.push_back(x);

//      printVector(p);
//     
// 

/* //////////////////////////////////////////////////*/
p.push_back(5);
p.push_back(10);
printVector(p);
vector<int>p2=p; 
p2.push_back(15);
printVector(p2);

return 0;
}
