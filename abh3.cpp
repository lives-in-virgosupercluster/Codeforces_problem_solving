#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
long long int func(int n,vector<ll>A,int m){
    vector<int>prefix(n,0);
    vector<int>suffix(n,0);
    for(ll i=0;i<n;i++){
        if(i==0){
            prefix[i]+=A[i];
        }
        else{
            prefix[i]=prefix[i-1]+A[i];
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(i==n-1){
            suffix[i]=A[i];
            
        }
        else{
            suffix[i]=suffix[i+1]+A[i];
        }
    }
    ll mx=-1;
    for(ll i=0;i<n;i++){
        
            if(prefix[i]-A[i]<=m && suffix[i]-A[i]<=m){
                cout<<"hello"<<endl;
mx=max(mx,i+1+n-i-1);
            }
        

    }
    cout<<mx<<endl;
}


int main(){

ll n;
cin>>n;
ll m;
cin>>m;
vector<ll>A;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    A.push_back(x);
}
func(n,A,m);


return 0;
}