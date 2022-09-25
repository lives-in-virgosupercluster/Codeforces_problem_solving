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
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    ll max=-1;
    for(ll i=0;i<n;i++){
        if(m[v[i]]>max){
            max=m[v[i]];
        }

    }
    if(max>n-max){
        cout<<max-(n-max)<<endl;
    }
    else{
        if(n%2==0){
        cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    

}
return 0;
}