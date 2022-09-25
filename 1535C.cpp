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
    string s;
    cin>>s;
    ll n=s.length();
    ll dp[n+1][2];
    dp[0][0]=0;
    dp[0][1]=0;
    
    
    ll ans=0;
    ans=0;
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='?'){
            dp[i][0]=dp[i-1][1]+1;
            dp[i][1]=dp[i-1][0]+1;
        }
        else if(s[i-1]=='0'){
            dp[i][0]=dp[i-1][1]+1;
            dp[i][1]=0;
        }
        else{
            dp[i][1]=dp[i-1][0]+1;
            dp[i][0]=0;
        }
        ans+=max(dp[i][0],dp[i][1]);
        
    }
    
    cout<<ans<<endl;
    
    
    



}

return 0;
}