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
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll ans=v[0];
    for(ll i=1;i<n;i++){
        ans^=v[i];
        if(ans==0){
            cout<<v[i]<<endl;
            break;
        }

    }

    
}
return 0;
}