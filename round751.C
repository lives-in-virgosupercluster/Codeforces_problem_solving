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
vector<ll>a(n+1,0);
vector<ll>cnt(32,0);
vector<ll>ans;
for(ll i=1;i<=n;i++){
    cin>>a[i];
}
for(ll i=1;i<=n;i++){
    for(int j=1;j<=31;j++){
        if(a[i]>>(j-1) &1){
            cnt[j]++;

        }
    }
}
int flag=0;
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=31;j++){
        if(cnt[j]%i!=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        ans.push_back(i);
    }
    flag=0;

}
for(ll val:ans){
    cout<<val<<" ";
}
cout<<endl;
}
return 0;
}