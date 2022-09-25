#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,k;
cin>>n>>k;
vector<ll>v(n,0);
for(ll i=0;i<n;i++)
cin>>v[i];
vector<ll>ans;
ll res=0;
res+=v[n-1]-v[0];
for(ll i=1;i<n;i++){
    ans.push_back(v[i-1]-v[i]);
}
sort(ans.begin(),ans.end());
for(ll i=0;i<k-1;i++){
    res+=ans[i];
}
cout<<res<<endl;
return 0;
}