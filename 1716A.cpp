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
    if(n==1)
    cout<<2<<endl;
   else{
  ll x= ceil(double(n)/3);
cout<<x<<endl;
   }
 
  float a=1024.0f;
  cout<<a/3<<endl;

}
return 0;
}