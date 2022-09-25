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
    vector<vector<char>>grid(n,vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for(ll j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
   
    
    ll moves=0;
    for(ll i=0;i<(n+1)/2;i++){
        ll sum=0;
        for(ll j=0;j<(n/2);j++){
            sum=0;
             sum+=grid[i][j]-'0';
             sum+=grid[j][n-1-i]-'0';
             sum+=grid[n-1-i][n-1-j]-'0';
             sum+=grid[n-1-j][i]-'0';
             ll one=sum;
             ll zero=4-sum;
             moves+=min(one,zero);

            
        }
    }
    cout<<moves<<endl;
    

}
return 0;
}