#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
//thanks gaurang
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<ll>ans(n+1,INT32_MIN);
    for(ll i=0;i<n;i++){
        ll sum=0;
        //ll max=-99999;
        for(int j=i;j<n;j++){
            sum+=v[j];
            ans[j-i+1]=max(sum,ans[j-i+1]);
        }
    }
    
    ll maxans=0;
    for(ll i=0;i<n+1;i++){
        for(ll j=1;j<n+1;j++){
            maxans=max(maxans,ans[j]+min(j,i)*x);
        }
        cout<<maxans<<" ";
    }
    cout<<endl;
            

      
        
    
    
}
return 0;
}