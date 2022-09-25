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
    if(n<=2){
        cout<<0<<endl;
    }
    else{
        sort(v.begin(),v.end(),greater<ll>());
        vector<ll>prefix;
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            sum+=v[i];
            if(i!=n-1){
            prefix.push_back(sum);
            }
        }
        ll siz=prefix.size();
        ll ans=0;
        ll j=v.size()-1;
        ll k=0;
        k=n-1;
        for(ll i=siz-1;i>=0;i--){
            if(i==siz-1){
                ans-=prefix[i]-v[j]-v[0];
            }
            else{
                ans-=prefix[i]-(v[j])*(k);
            }
            //cout<<ans<<endl;
            j--;
            k--;
        }
        cout<<ans<<endl;
        
       // cout<<-v[n-1]*(n-2)<<endl;
    }
    
}
return 0;
}