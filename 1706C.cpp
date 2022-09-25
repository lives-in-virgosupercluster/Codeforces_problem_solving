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
    vector<ll>count(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
   if(n%2==1){
    for(ll i=1;i<n-1;i++){
        count[i]=max(v[i+1]-v[i],v[i-1]-v[i]);
        if(count[i]<0)
        count[i]=-1;
        count[i]++;
    }
    ll ans=0;
    for(ll i=1;i<n-1;i+=2){
        ans+=count[i];
    }
    cout<<ans<<endl;
   }
   else{
    vector<ll>prefix(n,0),suffix(n,0);
    for(ll i=1;i<n-1;i++){
        if(i%2==0){
            prefix[i]=0;
            suffix[i]=max(v[i+1]-v[i],v[i-1]-v[i]);
            if(suffix[i]<0){
                suffix[i]=-1;
            }
            suffix[i]++;
        }
        else{
             suffix[i]=0;
            prefix[i]=max(v[i+1]-v[i],v[i-1]-v[i]);
            if(prefix[i]<0){
                prefix[i]=-1;
            }
            prefix[i]++;
        }
    }
    for(ll i=1;i<n;i++){
        prefix[i]=prefix[i-1]+prefix[i];
        //cout<<"i--"<<i<<"prefix--"<<prefix[i]<<endl;
    }
    for(ll i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+suffix[i];
         //cout<<"i--"<<i<<"suffix--"<<suffix[i]<<endl;
    }
    ll ans=-1;
    ll sum=0;
   // cout<<suffix[2]<<endl;
    for(ll i=0;i<n;i+=2){
        //ll sum=0;
        if(i>0)
         sum=prefix[i-1];
         if(i+2<n)
         sum+=suffix[i+2];
         //cout<<sum<<endl;
        if(ans==-1){
            ans=sum;
        }
        else{
            ans=min(sum,ans);
        }
       // cout<<ans<<endl;

    }
    cout<<ans<<endl;
   }
}
return 0;
}