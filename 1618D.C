#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<ll>in;
//vector<ll>dp(k,0);
ll x;
for(int i=0;i<n;i++){
    cin>>x;
    in.push_back(x);

}
//p[0]=accumulate(in.begin(),in.end(),dp[0]);
sort(in.begin(),in.end());
// for(auto j:in){
//     cout<<j<<endl;
// }
vector<ll>first;
vector<ll>last;
for(int i=n-1;i>n-1-k;i--){
    ll x;
    x=in[i];
    first.push_back(x);

}
// for(auto a:first){
//     cout<<a<<endl;
// }
for(int i=n-k-1;i>=n-2*k;i--){
    ll x;
    x=in[i];
    //cout<<i<<endl;
    last.push_back(x);
}
// for(auto b:last){
//     cout<<b<<endl;
// }
ll sum=0;
for(ll i=0;i<first.size();i++){
    in.pop_back();
    in.pop_back();
    sum+=last[i]/first[i];
}
if(in.size()>0){
for(ll i=0;i<in.size();i++){
    sum+=in[i];

}
}
cout<<sum<<endl;

}
return 0;
}