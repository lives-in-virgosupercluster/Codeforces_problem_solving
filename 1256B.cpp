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
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        ll mn=99999;
        ll index=i;
        for(ll j=i;j<n;j++){
if(mn>v[j]){
    index=j;
    mn=v[j];

}
        }
        if(index!=n-1)
       rotate(v.begin()+i,v.begin()+index,v.begin()+index+1);
       else{
        rotate(v.begin()+i,v.begin()+index,v.end());
       }
        
        if(i!=index){
            i=index-1;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   
}
return 0;
}