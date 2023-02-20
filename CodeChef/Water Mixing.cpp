#include<iostream>
using namespace std;
int main(){
   int t,x,y,a,b;
   cin>>t;
   while(t--){
    cin>>x>>y>>a>>b;
    if(x==y){cout<<"YES"<<endl;}
    else if(x<y){
        if(y-x<=a){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }else{
        if(x-y<=b){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
   }
    return 0;
}