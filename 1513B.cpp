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
    const ll mod=1e9+7;
    cin>>n;
    vector<ll>v(n,0);
    map<ll,ll>m;
    int flag=0;
    int evencheck=0;
    ll min=1e9+1;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]<min){
            min=v[i];
        }
        m[v[i]]++;
       


    }
    
    if(m[min]>1){
        int flag=0;
        for(ll i=0;i<n;i++){
            if((min & v[i])!=min){
                flag=1;
                break;
            }
        
    }
    if(!flag){
        ll ans=m[min]*(m[min]-1);
        ll x=n-2;
        for(ll i=0;i<n-2;i++){
            ans*=x;
            ans%=mod;
            x--;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
    }
    else{
        cout<<0<<endl;
    }
    
    

    

}
return 0;
}