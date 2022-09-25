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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    if(k==1){
        cout<<((n-2)+1)/2<<endl;
    }
    else{
        ll ans=0;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1]+v[i+1]){
                ans++;
            }
        }
                cout<<ans<<endl;
    }
    
}
return 0;
}