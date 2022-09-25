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

map<ll,vector<ll>> num;
vector<ll>a(n,0);
for(int i=0;i<n;i++){
    cin>>a[i];
    if(num.find(a[i])==num.end()){
        num[a[i]].push_back(i);
    }
    else{
        num[a[i]].push_back(i);
    }
    
}
ll ans=-1;
for(auto x:num){
    for(int i=0;i<x.second.size()-1;i++){
        ll first=x.second[i];
        ll last =x.second[i+1];
        ll new1=last-first;
        ll minans=n-new1;


        ans=max(ans,minans);

    }
}
cout<<ans<<endl;
}
return 0;
}