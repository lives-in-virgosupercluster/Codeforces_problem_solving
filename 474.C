#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<ll>v2(m,0);
    vector<ll>sum;
    ll sum1=0;
    for(ll i=0;i<m;i++){
        cin>>v2[i];
        //sum1+=v2[i];
        //sum.push_back(sum1);
    }
    for(ll i=0;i<n;i++){
        sum1+=v[i];
        sum.push_back(sum1);
    }
    vector<ll>ans;
    // for(int a:sum)
    // cout<<a<<endl;
    for(int i=0;i<m;i++){
        ll l=-1;
        ll r=n-1;
        while(l+1<r){
            ll mid=(l+r)/2;
            if(sum[mid]>=v2[i]){
                r=mid;
                
            }
            else{
                l=mid;
            }
        }
        ans.push_back(r+1);
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;


return 0;
}