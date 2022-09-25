#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll n,m,k;
cin>>n>>m>>k;
vector<ll>p(m+1,0);
for(ll i=1;i<=m;i++){
cin>>p[i];
}
ll now=1;
ll sum=0;
ll ans=0;
while(now<=m){
    ll r=((p[now]-sum-1)/k+1)*k+sum;
    while(now<=m && p[now]<=r){
        sum++;
        now++;
    }
    ans++;
}
cout<<ans<<endl;
return 0;
}