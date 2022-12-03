#include<bits/stdc++.h>
using namespace std;
  
int main(){
     pair<string,int>p;
     //p=make_pair("Rohan",1);

     // pair also initializes as
      p={"Rohan",1};
     cout<<p.first<<" "<<p.second<<endl;
/*//////////////////////////////////////////*/
 
   pair<int,int>p_array[3];
   p_array[0]={1,2};
   p_array[1]={3,4};
   p_array[2]={5,6};
   for(int i=0;i<3;i++)
  { 
     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }


    return 0;
} 
