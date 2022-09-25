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
    vector<ll>ans(n+1,0);
    if(n%2==0){
        for(ll i=1;i<=n;i++){
ans[i]=i;
        }
        for(ll i=1;i<=n;i+=2){
            swap(ans[i],ans[i+1]);
        }
    }
    else{
         for(ll i=1;i<=n;i++){
ans[i]=i;
        }
        for(ll i=1;i<n;i+=2){
            swap(ans[i],ans[i+1]);
        }
        ll temp=ans[1];
        ans[1]=ans[n];
        ans[n]=temp;
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}