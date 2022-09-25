#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,m;
cin>>n>>m;
map<ll,ll>v;
ll ans=0;
unordered_set<ll>s;
for (ll i = 0; i < m; i++)

{
    ll x,y;
    cin>>x;
    cin>>y;
   v[min(x,y)]++;
   if(v[min(x,y)]==1){
    s.insert(min(x,y));
   }
}
ll q;
cin>>q;
map<ll,ll>temp=v;
for (ll i = 0; i < q; i++)
{
    ll t;
    cin>>t;
    
    ll x,y;
    if(t==1){
        cin>>x>>y;
        temp[min(x,y)]++;
        if(temp[min(x,y)]==1){
            s.insert(min(x,y));
        }
    }
    else if(t==2){
        cin>>x>>y;
        temp[min(x,y)]--;
        if(temp[min(x,y)]==0){
            s.erase(min(x,y));
        }

    }
    else{
        ll ans=1;
        cout<<n-s.size()<<endl;
        //cout<<ans<<endl;
        
    }
}


return 0;
}