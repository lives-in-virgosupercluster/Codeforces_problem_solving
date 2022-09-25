#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool comp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.second<b.second){
        return true;
    }
    else{
        return false;
    }
}
bool comp1(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first<b.first){
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
    string v;
   // cin>>v;
    ll n,m;
    cin>>n>>m;
//    cout<<m<<endl;
    //map<ll,ll>num;
    map<ll,ll>ind;
    ll x,y;
    vector<pair<ll,ll>>p;
    for(ll i=1;i<=m;i++){
        cin>>x;
        cin>>y;
        //m.insert({x,y});
        p.push_back({x,y});
        //num[x]=y;
        ind[x]=i;
        
    }
    sort(p.begin(),p.end(),comp);
    // for(auto i:p){
    //     cout<<i.first<<endl;
    //     cout<<i.second<<endl;
    // }
    while(p.size()!=2*n){
        p.pop_back();
    }
    sort(p.begin(),p.end(),comp1);
    ll j=p.size()-1;
    ll sum=0;
    for(ll i=0;i<p.size();i++){
        sum+=p[i].second;
    }
    cout<<sum<<endl;
    for(ll i=0;i<p.size()/2;i++){
        cout<<ind[p[i].first]<<" "<<ind[p[j].first]<<endl;
        //sum+=p[i].second+p[j].second;
        j--;


    }
    //cout<<sum<<endl;

}
return 0;
}