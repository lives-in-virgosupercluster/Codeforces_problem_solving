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
ll n,x,y;
cin>>n>>x>>y;
vector<ll>v(n+1,0);
for (ll i = 1; i <= n; i++)
{
    /* code */
    cin>>v[i];
}
ll sum=0;
 sum=accumulate(v.begin(),v.end(),sum);
 if(y%2==(x+sum)%2){
     cout<<"Alice"<<endl;
 }
 else{
     cout<<"Bob"<<endl;
 }


}
}