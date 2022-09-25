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
    ll x;
    cin>>x;
    vector<ll>v(n,0);
    ll sum=0;
    ll minz=1e9;
    ll maxz=-1;
    ll tempmin,tempmax;
    ll num=0;
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
    
    for(ll i=0;i<n;i++){
        if(i==0){
            minz=v[i]-x;
            maxz=v[i]+x;
        }
        else{
            tempmin=v[i]-x;
            tempmax=v[i]+x;
            if(minz>tempmax || maxz<tempmin){
                num++;
                minz=tempmin;
                maxz=tempmax;
            }
            else{
                minz=max(tempmin,minz);
                maxz=min(tempmax,maxz);
            }
            
        }
    }
    cout<<num<<endl;

}
return 0;
}