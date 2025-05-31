#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        while(true){
            ll g = __gcd(a, b);
            if(g == 1){
                break;
            }
            b/=g;
        }
        if(b == 1) puts("Yes");
        else puts("No");
    }
    return 0;
}
