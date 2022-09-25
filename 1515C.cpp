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
    ll n,m,x;
    cin>>n>>m>>x;
    vector<ll>v(n,0);
    multiset<pair<ll,ll>>s;
    vector<ll>ans(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        if(i<m){
            s.insert({v[i],i+1});
            ans[i]=i+1;
        }
        else{
        pair<ll,ll> x=(*s.begin());
        s.erase(s.begin());
            x.first+=v[i];
            ans[i]=x.second;
            s.insert(x);

        }
    }
    pair<ll,ll>max1=*(--s.end());
    pair<ll,ll>min1=*(s.begin());
    if(max1.first-min1.first>x){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
        for (ll i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    
    
}
return 0;
}