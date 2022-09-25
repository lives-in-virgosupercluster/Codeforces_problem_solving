#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,m,k;
cin>>n>>m>>k;
vector<ll>v(n,0);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
vector<ll>mn;
for(ll i=1;i<n;i++){
    mn.push_back(v[i]-v[i-1]);
}
sort(mn.begin(),mn.end());
ll sum=0;
for(ll i=0;i<n-k;i++){
    sum+=mn[i];
}
sum+=k;
cout<<sum<<endl;

return 0;
}