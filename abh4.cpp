#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
    ll n=0;
    ll k=0;
    cin>>n>>k;
 vector<string>v(n,0);
 for(ll i=0;i<n;i++){
    cin>>v[i];
 }
ll errors=0;
vector<ll>nummis(n,0);
for(ll i=0;i<n;i++){
    int flag=1;
    for(ll j=0;j<n;j++){
        if(i!=j){
        for(ll k=0;k<v[i].length();k++){
            if(v[i][k]!=v[j][k]){
                errors++;
            }
            if(errors>k){
                flag=0;
                break;
            }
        }
        nummis[i]+=errors;
        errors=0;
        }
        if(flag==0){
            break;
        }
    }
    if(flag==0){
        nummis[i]=10000;
    }
   
}
ll mn=100000;
ll index=0;
for(ll i=0;i<n;i++){
    if(mn>nummis[i]){
        mn=nummis[i];
        index=i;
    }

}
if(mn==10000){
    cout<<0<<endl;
}
else{
    cout<<v[index]<<endl;
}
return 0;
}