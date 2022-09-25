#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
ll min(vector<ll> v,ll n){
    ll r=1e9;
    for(int i=0;i<n;i++){
        if(r>v[i]){
            r=v[i];

        }

    }
    return r;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string s;
    while(t--){
        ll n,m;
       
        cin>>m>>n;
        vector<vector<ll>> v(m,vector<ll> (n));
        vector<ll> max1(n,0);
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        ll l=1;
        ll r=1e9;
       for(ll i=0;i<m;i++){
           for(ll j=0;j<n;j++){
               if(max1[j]<v[i][j]){
                   max1[j]=v[i][j];
               }

           }
       }
       l=min(max1,n);
       
      
       if(m<=n-1){
           
           cout<<l<<endl;
       }
       else{
          ll maxnum=0;
           for(int i=0;i<m;i++){
               sort(v[i].begin(),v[i].end());
               if(maxnum<v[i][n-2]){
                   maxnum=v[i][n-2];
                  
               }
               
           }
          
           
           if(l<maxnum){
               cout<<l<<endl;
           }
           else{
               cout<<maxnum<<endl;
           }
       }
    }
    return 0;
}