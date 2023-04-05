#include <bits/stdc++.h>
#define PUTIN_still_Alive ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
PUTIN_still_Alive;
   int t;cin>>t;
   while(t--){
    string s,c;cin>>s>>c;
    for(int i=0;i<s.length();i++){
        if(s[i]==c[i]){cout<<"G";}
        else{cout<<"B";}
    }
    cout<<"\n";
   }
    return 0;
}