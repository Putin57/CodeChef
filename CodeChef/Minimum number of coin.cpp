#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int t;
  int x,a;
  cin>>t;
  while(t--){
   cin>>x;
   a=ceil((float)x/10);
   if (x%5==0 || x%10==0){
      cout<<a<<endl;
   }else{
      cout<<"-1"<<endl;
   }
  }
   return 0;
}