#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(ll mid,vector<ll>v,ll x){
    ll teams=0;
    for(ll i=0;i<v.size();i++){
        ll z=ceil(double(x)/v[i]);
        if(v.size()-z-i+teams+1>=mid){
            teams++;
            i+=z-1;
        }

    }
    if(teams>=mid){
        return true;
    }
    return false;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n;
    cin>>x;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll z=0;
    ll teams=0;
    ll mn=0;
    for(ll i=0;i<n;i++){
        if(z==0){
            if(v[i]>x){
teams++;
            }
            else{
                mn=v[i];
                z++;
            }
        }
        else{
            z++;
            mn=min(mn,v[i]);
            if(z*mn>=x){
                teams++;
                z=0;
            }
        }
    }
    cout<<teams<<endl;
}
return 0;
}