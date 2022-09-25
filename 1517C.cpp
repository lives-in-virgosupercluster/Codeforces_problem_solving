#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    map<ll,ll>count;
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,0));
    for (ll i = 1; i <=  n; i++)
    {
        cin>>v[i];

    }
    //ll x=v[0];
    for(ll i=1;i<=n;i++){
        ll x=i;
        ll y=i;
        for(ll j=0;j<v[i];j++){
            dp[x][y]=v[i];
            if(y!=1){
                if(dp[x][y-1]==0){
                    y--;
                    continue;
                    
                }
                else{
                    x++;
                    continue;
                }
            }
            else{
                x++;
            }
            

        }
        
    }
    for( ll i=1;i<=n;i++){
        for(ll j=1;j<=i;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}