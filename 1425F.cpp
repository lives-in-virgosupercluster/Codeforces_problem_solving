#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    ll sum=0;
    for(ll i=2;i<=n;i++){
        ll x;
        cout<<"?"<<" "<<1<<" "<<i<<endl;
        fflush(stdout);
        cin>>x;
        v[i]=x;
        //sum+=x;
        if(i>2){
           // v[i]=v[i]-sum;
            //ll temp=sum+x;
            v[i]=x-sum;

        }
        sum+=x-sum;
    }
    cout<<"?"<<" "<<2<<" "<<3<<endl;
    ll x;
    cin>>x;
    fflush(stdout);
    ll temp=v[2];
    v[2]=x-v[3];
    v[1]=temp-v[2];
    cout<<"!"<<" ";
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
        fflush(stdout);

    }
    

return 0;
}