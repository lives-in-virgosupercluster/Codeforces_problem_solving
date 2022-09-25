#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
ll s,d;
cin>>s>>d;
vector<ll>spaceship(s,0);
for(ll i=0;i<s;i++)
cin>>spaceship[i];
vector<pair<ll,ll>>defense(d);
for(ll i=0;i<d;i++){
    ll def,gold;
    cin>>def>>gold;
    defense[i]={def,gold};

}
sort(defense.begin(),defense.end());
vector<ll>prefix(d,0);
for(ll i=0;i<d;i++){
    if(i==0){
        prefix[i]=defense[i].second;
    }
    else{
        prefix[i]=prefix[i-1]+defense[i].second;
    }

}

for(ll i=0;i<s;i++){
    ll l=0;
    ll r=d;
    if(defense[l].first>spaceship[i]){
        cout<<0<<endl;
    }
    else{
       // ll ans=0;
        while(l+1<r){
            ll mid=(l+r)/2;
            if(defense[mid].first<=spaceship[i]){
                l=mid;
                
            }
            else{
                r=mid;
            }
           // cout<<"l---"<<l<<endl;
           // cout<<"r---"<<r<<endl;
        }
        cout<<prefix[l]<<" ";
    }
}

return 0;
}