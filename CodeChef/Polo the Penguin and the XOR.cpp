#include <bits/stdc++.h>
using namespace std; 

const int N = 1e5 + 9;
int a[N], pref_xor[N];
int bit[30][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        pref_xor[0] = 0;
        for(int i = 1; i <= n; i++){
            pref_xor[i] = pref_xor[i - 1] ^ a[i];
        }
        for(int k = 0; k < 30; k++){
            int now_bit = (pref_xor[0] >> k) & 1;
            if(now_bit == 0) bit[k][0]++;
            else bit[k][1]++;
        }
        long long int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int k = 0; k < 30; k++){
                int now_bit = (pref_xor[i] >> k) & 1;
                if(now_bit == 0){
                    ans += 1LL * bit[k][1] * (1 << k);
                }
                else{
                    ans += 1LL * bit[k][0] * (1 << k);
                }
            }
            for(int k = 0; k < 30; k++){
                int now_bit = (pref_xor[i] >> k) & 1;
                if(now_bit == 0){
                    bit[k][0]++;
                }
                else{
                    bit[k][1]++;
                }
            }
        }
        cout << ans << '\n';
        for(int k = 0; k < 30; k++){
            bit[k][0] = 0;
            bit[k][1] = 0;
        }
    }
    return 0;
}
