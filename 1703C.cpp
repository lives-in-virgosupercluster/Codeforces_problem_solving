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
    vector<ll>moves(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        for(ll j=0;j<x;j++){
            char a;
            cin>>a;
            if(a=='U'){
                v[i]--;
            }
            else{
                v[i]++;
            }
        }
    

    }
    for(ll i=0;i<n;i++){
        ll value=v[i]+moves[i];
        if(0>value){
            cout<<10+value<<" ";

        }
        else if(9<value){
            cout<<value-10<<" ";
            
        }
        else{
            cout<<value<<" ";
        }
    }
    cout<<endl;
    
}
return 0;
}