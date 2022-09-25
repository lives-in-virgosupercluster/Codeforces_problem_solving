#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;

    int n;
    cin>>n;
    vector<ll>a(n,0);
    vector<ll>b(n,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    //set<ll>s;
    vector<ll>diff;
    for(ll i=0;i<n;i++){
       diff.push_back(a[i]-b[i]);

    }
    sort(diff.begin(),diff.end());
    // for(auto ab:diff){
    //     cout<<ab<<endl;
    // }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll l=-1;
        ll r=i-1;
    if(i>0 && (diff[i-1]+diff[i])>0 ){
        ll mid=0;
    
        while(l+1<r){
            mid=(l+r)/2;
            if(diff[mid]+diff[i]>0){
                r=mid;
            }
            else{
                l=mid;
            }
           // cout<<mid<<endl;
          // cout<<mid<<endl;

        }
        //cout<<mid<<endl;
        ans+=i-r;
    }
    }
    cout<<ans<<endl;

return 0;
}