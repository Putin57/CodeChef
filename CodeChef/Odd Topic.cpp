#include <bits/stdc++.h>
using namespace std; 

const int N = 1e5 + 9, MAX_VAL = 4005;
bitset<MAX_VAL> pref_mask_a[N], pref_mask_b[N];
int a[N],b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, q; cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }
    pref_mask_a[0].reset();
    for(int i = 1; i <= n; i++){
        pref_mask_a[i] = pref_mask_a[i - 1];
        pref_mask_a[i].flip(a[i]);
    }
    for(int i = 1; i <= m; i++){
        pref_mask_b[i] = pref_mask_b[i - 1];
        pref_mask_b[i].flip(b[i]);
    }

    while(q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        auto sub_mask_a = pref_mask_a[r1] ^ pref_mask_a[l1 - 1];
        auto sub_mask_b = pref_mask_b[r2] ^ pref_mask_b[l2 - 1];
        cout << (sub_mask_a ^ sub_mask_b).count() << '\n';
    }

  
    return 0;
}
