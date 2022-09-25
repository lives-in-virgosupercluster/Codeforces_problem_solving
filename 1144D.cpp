#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
ll n;
cin>>n;
vector<ll>v(n+1,0);
map<ll,ll>m;
map<ll,ll>pos;
for(ll i=1;i<=n;i++){
    cin>>v[i];
    m[v[i]]++;
pos[v[i]]=i;
}
ll mx=-1;
ll num=-1;
for(ll i=1;i<=n;i++){
    if(mx<m[v[i]]){
        mx=m[v[i]];
        num=v[i];
    }
}
ll position=pos[num];
cout<<n-m[num]<<endl;
for(ll i=position-1;i>=1;i--){
    if(v[i]!=num){
        if(num<v[i]){
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        }
        else{
            cout<<1<<" "<<i<<" "<<i+1<<endl;
        }

    }
}
for(ll i =position+1;i<=n;i++){
    if(v[i]!=num){
        if(num<v[i]){
            cout<<2<<" "<<i<<" "<<i-1<<endl;
        }
        else{
            cout<<1<<" "<<i<<" "<<i-1<<endl;
        }
    }
}
return 0;
}