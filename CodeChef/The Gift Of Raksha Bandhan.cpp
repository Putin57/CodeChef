#include <bits/stdc++.h>
using namespace std; 
using ll = long long;

const int prime1 = 137, prime2 = 277, mod1 = 127657753, mod2 = 987654319;
const int N = 5e6 + 9;

int power(ll n, ll k, int mod){
  int ans = 1 % mod; n %= mod; if(n < 0) n += mod;
  while(k){
    if(k & 1) ans = (ll) ans * n % mod;
    n = (ll) n * n % mod;
    k >>= 1;
  }
  return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void pre_call(){
  pw[0] = {1, 1};
  for(int i = 1; i < N; i++){
    pw[i].first = 1LL * pw[i - 1].first * prime1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * prime2 % mod2;
  }
  ip1 = power(prime1, mod1 - 2, mod1);
  ip2 = power(prime2, mod2 - 2, mod2);
  ipw[0] = {1, 1};
  for(int i = 1; i < N; i++){
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}

pair<int, int>pref[N];
void build(string s){
  int n = s.size();
  for(int i = 0; i < n; i++){
    pref[i].first = 1LL * s[i] * pw[i].first % mod1;
    if(i) pref[i].first = (pref[i].first + pref[i - 1].first)%mod1;
    pref[i].second = 1LL * s[i] * pw[i].second % mod2;
    if(i) pref[i].second = (pref[i].second + pref[i - 1].second)%mod2;
  }
}

pair <int, int> get_hash(int i, int j){
  assert(i <= j);
  pair <int, int> hs({0, 0});
  hs.first = pref[j].first;
  if(i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pref[j].second;
  if(i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}

int lcp(int i, int j, int x, int y) { // O(log n)
  int l = 1, r = min(j - i + 1, y - x + 1), ans = 0;
  while (l <= r) {
    int mid = (l + r) >> 1;
    if (get_hash(i, i + mid - 1) == get_hash(x, x + mid - 1)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return ans;
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  pre_call(); 
  string s; cin >> s;
  build(s); 
  int n = s.size();
  int q; cin >> q;
  while(q--){
    int k; cin >> k;
    int result = lcp(0, k - 1, k, n - 1);
    cout << result << '\n';
  }
  return 0;
}