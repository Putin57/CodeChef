#include <bits/stdc++.h>
using namespace std; 
using ll = long long int;
using un_int = unsigned int;

const unsigned int Value = (1u << 31);
bitset<Value> arr;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    unsigned int s, a, b;
    cin >> q >> s >> a >> b;
    ll sum = 0;
    while (q--){
        un_int x = s / 2;
        if(s & 1){
            if(!arr[x]){
                arr[x] = true;
                sum += x;
            }
        }
        else{
            if(arr[x]){
                arr[x] = false;
                sum -= x;
            }
        }
        s = a * s + b;
    }
    cout << sum << '\n';
    return 0;
}
