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
    vector<ll>b;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    set<ll>s;
    
    for (ll i = 0; i <= n; i++)
    {
        s.insert(i);
    }
     vector<ll>mex(n,0);
    
    for (ll i = n-1   ; i >=0; i--)
    {    s.erase(v[i]);
        mex[i]=*(s.begin());
        
    }
    s.clear();
    for (ll i = 0; i <= n; i++)
    {
        s.insert(i);
    }
ll j=0;   
    for(ll i=0;i<n;i++){
        s.erase(v[i]);
        if((*s.begin())==mex[j]){
            b.push_back(mex[j]);
            s.clear();
            for(int i=0;i<=mex[j];i++)
            s.insert(i);
            //i=j;
            j=i+1;
        }
    }
    
    cout<<b.size()<<endl;
    for(ll ans:b)
    cout<<ans<<" ";
    cout<<endl;
    
}
return 0;
}