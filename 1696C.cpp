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
    vector<pair<ll,ll>>a;
    vector<pair<ll,ll>>b;
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll count=1;
        while(x%m==0){
            count*=m;
            x/=m;
        }
        a.push_back({x,count});
    }
    ll k;
    cin>>k;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin>>x;
        ll count=1;
        while(x%m==0){
            count*=m;
            x/=m;
        }
        b.push_back({x,count});
    }
    ll l=0;
    ll r=0;
    while(l<n && r<k){
        if(a[l].first!=b[r].first){
            break;

        }
        else{
             if(a[l].second>b[r].second){
                a[l].second-=b[r].second;
                r++;

            }
            else if(a[l].second<b[r].second){
                b[r].second-=a[l].second;
                l++;
            }
            else{
                l++;
                r++;
            }
        }
    }
    if(l<n || r<k){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
    // cout<<"l--"<<l<<endl;
    // cout<<"r--"<<r<<endl;

}
return 0;
}