#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(map<ll,ll>&m,ll k,vector<ll>v){
    //ll pow=0;
    for(ll i=0;i<v.size();i++){
        ll pow=0;
    while(v[i]){
        m[pow]+=v[i]%k;
        if(m[pow]>1){
            return false;
        }
        pow++;
        v[i]/=k;
        

    }
    }
    return true;

}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>v(n,0);
map<ll,ll>m;
for(ll i=0;i<n;i++){
    cin>>v[i];
}
bool flag=check(m,k,v);
if(flag){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
