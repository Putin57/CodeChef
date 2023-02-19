#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x%(y*z)==0){cout<<x/(y*z)<<endl;}
        else{cout<<(x/(y*z))+1<<endl;}
    }
    return 0;
}