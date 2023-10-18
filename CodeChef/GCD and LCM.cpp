#include "bits/stdc++.h"
using namespace std;
#define loop int t;cin>>t;while(t--)
#define all(x) x.begin(),x.end()
#define gcd __gcd
#define Speed ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
typedef vector<int> vi;

void init_code(){
    Speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    init_code();
    loop{
        int x,y,k;
        cin>>x>>y>>k;
        if(x>y and k==1){
            cout<<y+gcd(x,y)<<"\n";
        }
        else if(x<y and k==1){
            cout<<x+gcd(x,y)<<"\n";
        }
        else{
            cout<<gcd(x,y)+gcd(x,y)<<"\n";
        }
    }
    return 0;
}
