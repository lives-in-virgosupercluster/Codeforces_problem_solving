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
    vector<ll>v(n+1,0);
    map<int,int>m;
    vector<ll>count(n+1,0);
    for (ll i = 1; i <=n; i++)
    {
        cin>>v[i];
    }
    
    for (ll i = 1; i <= n; i++)
    {
        if(m.find(v[i])!=m.end()){
            if((i-m[v[i]]-1)%2==0){
                count[v[i]]++;
            }
            m[v[i]]=i;
        }
        else{
            m[v[i]]=i;
            count[v[i]]=1;
        }
        
    }
    for (ll i = 1; i <= n; i++)
    {
        cout<<count[i]<<" ";
    }
    cout<<endl;
    

}
return 0;
}