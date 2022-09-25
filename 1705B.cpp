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
    ll counter=0;
    ll zer=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(counter==0){
        if(v[i]!=0){
            counter=1;
        }
        }
        else{
            if(v[i]==0 && i!=n-1){
    zer++;
            }
        }
    }
    ll sum=0;
    ll count=0;
    for(ll i=1;i<n-1;i++){
        
        sum+=v[i];
    }
    
   
   
    sum+=v[0];
    if(zer>0){
        sum+=zer;
        
    }
    
    cout<<sum<<endl;
    
}
return 0;
}