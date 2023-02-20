#include<iostream>
using namespace std;
int main(){
   int t,a,b;
   cin>>t;
   while(t--){
    cin>>a>>b;
    if(a+b>=11){cout<<21-(a+b)<<endl;}
    else{cout<<"-1"<<endl;}}
    return 0;
}