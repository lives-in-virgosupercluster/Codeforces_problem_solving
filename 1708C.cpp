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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    string ans="";
    ll tempq=0;
    for(ll i=n-1;i>=0;i--){
        if(tempq>=v[i]){
            ans="1"+ans;
        }
        else if(tempq<v[i] && tempq<q){
            ans="1"+ans;
            tempq++;
        }
        else{
            ans="0"+ans;

        }

    }
    cout<<ans<<endl;

}
return 0;
}