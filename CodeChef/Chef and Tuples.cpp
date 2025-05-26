#include <bits/stdc++.h>
using namespace std;
using ll = long long int; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n, a, b, c; cin >> n >> a >> b >> c;
        unordered_set<int>us;
        int sq = sqrt(n) + 1;
        for(int i = 1; i < sq; i++){
            if(n % i == 0){
                us.insert(i);
                us.insert(n/i);
            }
        }
        int ans = 0;
        for(auto i: us){
            if(i <= a){
                for(int j: us){
                    if(j <= b){
                        if(n % (1LL * i * j) == 0){
                            if(n / (i * j) <= c){
                                ans++;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
