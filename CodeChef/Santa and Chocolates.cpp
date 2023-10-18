#include "bits/stdc++.h"
using namespace std;
#define loop int t;cin>>t;while(t--)
#define all(x) x.begin(),x.end()
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
        int n,m;
        cin>>n>>m;
        int count=0;
        vi arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count+=arr[i];
        }
        if(count<n){cout<<"NO\n";}
        else{
            if((count%n)>0 and m==0){cout<<"NO\n";}
            else{cout<<"YES\n";}
        }
    }
    return 0;
}
