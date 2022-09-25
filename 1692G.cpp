#include <bits/stdc++.h>
#define ll  long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n,0);
    ll pow=1;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
       
    }
    int num=0;
    ll ans=0;
    for(int i=1;i<n;i++){
        if(v[i-1]>=2*v[i]){
            if(i-num-k>0){
                ans+=i-num-k;
            }
            num=i;
            

        }
        else if(i==n-1){
            if(n-num-k>0)
            ans+=n-num-k;
        }
        

    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<ans<<endl;

    
}
return 0;
}