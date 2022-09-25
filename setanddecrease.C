#include<bits/stdc++.h>
#define ll   long long int
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    vector<ll>v(n,0);
    vector<ll>prefix(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i==0){
            prefix[i]=v[i];
        }
        else{
            prefix[i]=prefix[i-1]+v[i];
        }
    }
    ll x=0;
    ll min=10e9;
    ll longsum=0;
    for(int i=0;i<n;i++){
        longsum+=v[i];
    }
    if(longsum<=k){
        cout<<0<<endl;
    }
    else{
    for(double i=0;i<n;i++){
       
        x= v[0]-floor((k+v[0]-prefix[n-i-1])/(i+1));
        if(x<0){
            x=0;
        }
        
        if(min>x+i ){
            min=x+i;
        }

    }
    cout<<min<<endl;
    }
}
    
    
    
return 0;

}