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
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        
        m[v[i]]++;
    }
    ll d=0;
    ll s=0;
    for(auto i:m){
        if(i.second>1){
            d++;
        }
        else if(i.second==1){
            s++;
        }
    } 
    ll ans=d+ (s+1)/2;
    cout<<ans<<endl;  
    

    

}
return 0;
}