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
int n;
cin>>n;
vector<ll> v(n+1);
vector<ll> vans(n+1,0);
vector<ll> extra;
vector<ll>cnt(n+1,0);
int count=0;
for(int i=0;i<n;i++){
    cin>>v[i];
   
    }
    

    

for(int i=0;i<n;i++){
    ll k=v[i];
    while(k>0){
        if(1<=k && k<=n && cnt[k]==0){
            cnt[k]=1;
             count++;
            break;
        }
        k=k/2;
    }
    

}
if(count==n){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}

}
return 0;

}
