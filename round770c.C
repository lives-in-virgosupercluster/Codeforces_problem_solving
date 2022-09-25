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
ll n,k;
cin>>n>>k;
vector<ll>v(n*k+1,0);
if(n%2!=0 && k!=1){
    cout<<"NO"<<endl;
}

else{
    cout<<"Yes"<<endl;
    for(ll i=1;i<=n;i++){
        
        ll m=i;
        while(v[m]==1){
            m++;


        }
        v[m]=1;
        for(ll j=1;j<=k;j++){
            cout<<m<<" ";
            v[m]=1;
            m+=2;
            
        }
        cout<<endl;
    }

}
}
}