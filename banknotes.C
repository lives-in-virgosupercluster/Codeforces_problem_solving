#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll min(ll a,ll b ){
    if(a>b)
    return b;
    else 
    return a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k;
        vector<ll> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        x=k+1;
        ll sum=0;
        //cout<<x<<endl;
        ll b=0,c;
        //cout<<n<<endl;
        
    for(ll i=0;i<n;i++){
        if(x==0 || i==n-1){
           break;
       }
        c=(pow(10,v[i+1])/pow(10,v[i]))-1;
        //cout<<c<<endl;
        b=min(x,c);
        //cout<<b<<endl;

       sum+=pow(10,v[i])*b;
       x-= min(x,b);
       
       //cout<<sum<<endl;
       



}
if(x!=0){
    sum+=pow(10,v[n-1])*x;
}
    cout<<sum<<endl;

    }
    return 0;
}