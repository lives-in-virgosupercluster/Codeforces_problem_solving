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
    vector<ll>v(n,0);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll sumeven=0;
    ll sumodd=0;
    vector<ll>b;
    for(ll i=0;i<n;i+=2){
        sumeven+=v[i];
    }
    for(ll i=1;i<n;i+=2){
        sumodd+=v[i];
    }
    if(sum/2>sumeven){
        for(ll i=0;i<n;i++){
            if(i%2==0){
                b.push_back(1);
            }
            else{
                b.push_back(v[i]);
            }
        }
        
    }
    else{
        for(ll i=0;i<n;i++){
            if(i%2==0){
                b.push_back(v[i]);
            }
            else{
                b.push_back(1);
            }
        }
    
    }
    for(auto ans:b){
        cout<<ans<<" ";
    }
    cout<<endl;
}
return 0;
}