#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define loop int t;cin>>t;while(t--)
#define out(x) cout<<x<<"\n"
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
#define ulta(x) reverse(all(x))
#define get(x) getline(cin,x)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define pop pop_back
#define elif else if
#define gcd __gcd
typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vll;

int main(){
    loop{
        int n; 
        in(n);
        vi arr(n);
        for(int i=0; i<n; i++){
            in(arr[i]);
        }
        int xr=0;
        for(int i=0; i<n; i++){
            xr^=arr[i];
        }
        vi arr2;
        for(int i=0; i<n; i++){
            arr2.pb(xr^arr[i]);
        }
        sort(arr2);
        out(min(arr2[0],xr));
    }
    return 0;
}
