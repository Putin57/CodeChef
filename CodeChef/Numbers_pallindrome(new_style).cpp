/*************************[Bismillahir Rahmanir Rahim]**************************/
#include<bits/stdc++.h>
#include<stdio.h>
#include<ctype.h>
#define Mahid using namespace std;
#define ll long long
#define dl double
#define str string
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define yes printf("yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define no printf("no\n");
#define loop int t;cin>>t;while(t--)
#define puts printf
#define gcd __gcd
#define elif else if
#define stop break;
#define go continue;
#define x exit(0);
#define suru begin()
#define ses end()
#define bye return 0;
#define start int main()
#define vi vector<int>
#define vii vector<ll int>
#define si set<int>
#define gi greater<int>
#define pb push_back
#define Vikings_PUTIN ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
Mahid
void solve(){
    ll n;cin>>n;
    str s=to_string(n);
    str s1=s;
    reverse(s1.suru,s1.ses);
    ll n1=stoll(s1);
    if(n==n1){cout<<n1<<"\nYES";}
    else{cout<<n1<<"\nNO";}
}
start{
    solve();
    bye
}