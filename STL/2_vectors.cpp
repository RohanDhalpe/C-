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
p.emplace_back(20); // emplace_back(20)  takes smaller time than push_back() 
printVector(p);
vector<int>p2=p; 
p2.push_back(15);
printVector(p2);

return 0;
}//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   vector<vector<int>> p(10,vector<int>(20,0));    defining vector of 10X20;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

  
int main(){
     vector<vector<int>> p;
     
vector<int>p1;
p1.push_back(5);
p1.push_back(10);

vector<int>p2; 
p2.push_back(15);
p2.push_back(20);

p.push_back(p1);
p.push_back(p2);

for(auto vctr:p){
     for(auto it:vctr){
          cout<<it<<" ";
     }cout<<endl;
}
//printVector(p);



return 0;
}













