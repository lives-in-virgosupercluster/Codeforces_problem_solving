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
    vector<ll>v(n+1,0);
    ll max=-1;
    ll sum=0;
    ll index=0;
    multiset<pair<ll,ll>>m;
    for (ll i = 1; i < n+1; i++)
    {
        cin>>v[i];
        if(v[i]>0)
        m.insert({v[i],i});
    }
    //pair<ll,ll>a=*(--m.end());
    //cout<<a.first<<endl;
    vector<pair<ll,ll>>ans;
    while(m.size()>1){
        pair<ll,ll>a=*(--m.end());
        //cout<<a.first<<" ";
        m.erase(--m.end());
        pair<ll,ll>b=*(--m.end());
       // cout<<b.first<<" ";
        m.erase(--m.end());
        b.first-=1;
        a.first-=1;
        ans.push_back({a.second,b.second});
        if(a.first>0){
            m.insert({a.first,a.second});
        }
        if(b.first>0){
            m.insert({b.first,b.second});
        }
        
    }
    cout<<ans.size()<<endl;
    for( auto sz:ans)
    cout<<sz.first<<" "<<sz.second<<endl;
    
    

}
return 0;
}