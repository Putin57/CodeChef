#include<stdio.h>
#include<bits/stdc++.h>
#define loop int t;cin>>t;while(t--)
#define TurboSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve(){
    loop{
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        float mx=arr[arr.size()-1]+arr[arr.size()-2],jora=n*(n-1)/2,count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==mx){
                    count++;
                }
            }
        }
        float prob=count/jora;
        printf("%.8f\n",prob);
    }
}

int main(){
    TurboSpeed
    solve();
    return 0;
}
