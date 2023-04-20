/*************************[Bismillahir Rahmanir Rahim]**************************/
#include<bits/stdc++.h>
#define ll long long
# define dl double
#define YES cout<<"YES"<<"\n";
#define Yes cout<<"Yes"<<"\n";
#define yes count<<"yes"<<"\n";
#define NO cout<<"NO"<<"\n";
#define No cout<<"No"<<"\n";
#define no count<<"no"<<"\n";
#define vi vector<int>
#define Vikings_PUTIN ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
Vikings_PUTIN;
    int t;cin>>t;while(t--){
        int n,count=0;cin>>n;
        for(int i=0;n!=50;i++){
            if(n>50){
                n-=3;count++;
            }
            else{n+=2;count++;}
        }
        cout<<count<<"\n";
        }
    
    return 0;
}