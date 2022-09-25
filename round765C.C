#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define inf 1000000000000000005

using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;


int n,l,k;
cin>>n>>l>>k;

vector<ll>d(n+2,0);
vector<ll>a(n+2,0);
vector<vector<ll>>dp(n+2,vector<ll>(n+2,inf));
for(int i=1;i<=n;i++){
    cin>>d[i];
}
for(int j=1;j<=n;j++){
    cin>>a[j];
}
d[n+1]=l;
dp[1][0]=0;
for(int i=2;i<=n+1;i++){
    for(int j=0;j<=k;j++){
        if(j==0){
            dp[i][j]=dp[i-1][j]+(d[i]-d[i-1])*a[i-1];
            continue;
        }
        for(int prev=i-1;prev>0;prev--){
            int remove=i-prev-1;
            if(j>=remove){
                dp[i][j]=min(dp[i][j],dp[prev][j-remove]+(d[i]-d[prev])*a[prev]);
            }
        }
    }
}
ll ans=inf;
for(int i=0;i<=k;i++){
ans=min(dp[n+1][i],ans);
}
cout<<ans<<endl;




return 0;
}