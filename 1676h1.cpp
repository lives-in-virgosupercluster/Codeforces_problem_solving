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
    ll ans=0;
    for (ll  i = 0; i < n; i++)
    {
        for (ll j = i-1; j >=0; j--)
        {
            if(v[j]>=v[i]){
                ans++;
            }
        }
        
    }
    cout<<ans<<endl;
    
    
}
return 0;
}