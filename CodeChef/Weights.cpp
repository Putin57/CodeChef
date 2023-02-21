#include <iostream>
using namespace std;
int main() {
   int t,w,x,y,z;
   cin>>t;
   while(t--){
    cin>>w>>x>>y>>z;
    if(x==w || y==w || z==w){cout<<"YES"<<endl;}
    else if (x+y==w || y+z==w || z+x==w || x+y+z==w){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
   }
   return 0;
}