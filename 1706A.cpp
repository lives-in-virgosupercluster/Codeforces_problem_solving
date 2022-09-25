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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n,0);
    vector<string>ans(m+1,"B");
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
       ll sum=(m+1-v[i])+v[i];
       ll mini=min(m+1-v[i],v[i]);
       if(ans[mini]=="B"){
        ans[mini]="A";
        
       }
       else{
        ans[sum-mini]="A";
       }
    }
    for(ll i=1;i<=m;i++){
        cout<<ans[i];
    }
    cout<<endl;

}
return 0;
}