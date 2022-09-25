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
    int n,k;
   // int a=1<<1;
    //cout<<a<<endl;
    cin>>n>>k;
    vector<ll>v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
       // cout<<v[i];
    }
    vector<ll>temp;
    temp=v;
    
    for(int i=30;i>=0;i--){
        int count=0;
        for(int j=0;j<n;j++){
            if(!(v[j]&(1<<i))){
                count++;
                v[j]=v[j]|(1<<i);
            }
        }
        if(k>=count){
            k=k-count;
            temp=v;
        }
        else{
            v=temp;
        }

    }
    ll ans=v[0];
    // for(int a:v){
    //     cout<<a<<endl;
    // }
    for (int  i = 0; i < n; i++)
    {
        ans&=v[i];
    }
    cout<<ans<<endl;
    
    
}
return 0;
}