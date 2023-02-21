#include <iostream>
using namespace std;
int main() {
   int t,s,x,y,z;
   cin>>t;
   while(t--){
    cin>>s>>x>>y>>z;
    if(x+y+z<=s){cout<<"0"<<endl;}
    else if(x+z<=s || y+z<=s){cout<<"1"<<endl;}
    else{cout<<"2"<<endl;}
   }
   return 0;
}