#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];

    }
    ll mn=10e9;
    // for(int a:v){
    //     cout<<a<<endl;
    // }
    map<ll,vector<ll>>mv;
    for(int i=0;i<n;i++){
        if(mv[v[i]].empty()){
        for(ll j=0;j<n;j++){
                mv[v[i]].push_back({abs(v[i]-v[j])});
        }
        sort(mv[v[i]].begin(),mv[v[i]].end());
        }
        

    }
   // ll mn=10e9;
    for(ll i=0;i<n;i++){
        ll temp=0;
        for(ll j=0;j<3;j++){
           temp+=mv[v[i]][j];
        }
        mn=min(mn,temp);
    }
    
    cout<<mn<<endl;
}
return 0;
}