#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
void solve(vector<ll>&v,ll n,ll start,ll end){
    ll k=0;
    if(start==end){
        return ;
    
    }
    //cout<<n-1<<endl;
    for(ll i=start;i<end;i++){
         if(sqrt((n-1)+i)*sqrt((n-1+i))==(n-1+i)){
v[i]=n-1;
k=i;
break;
        }
    }
    ll j=n-1;
    j--;
    for(ll i=k+1;i<end;i++){
        v[i]=j;
        j--;
    }
     end=k;
     start=0;
    solve(v,j+1,start,end);
    

}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n,-1);
    ll k=0;
   solve(v,n,0,n);
   for(ll i=0;i<n;i++){
cout<<v[i]<<" ";
   }
   cout<<endl;
}
return 0;
}