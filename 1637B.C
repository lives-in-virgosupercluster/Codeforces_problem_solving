#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
ll solve(vector<ll>a){
    int n=a.size();
    ll ans=n;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        ans++;
       // cout<<a[i]<<endl;
    }
    return ans;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<ll>v(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin>>v[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        vector<ll>v1;
        for(int j=i;j<=n;j++){
            v1.push_back(v[j]);
            
            ans+=solve(v1);



        }
    }
    cout<<ans<<endl;
    
}
return 0;
}