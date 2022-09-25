#include <bits/stdc++.h>

#define endl "\n"
long long int distanceTravelled(int N,vector<int>A){
    sort(A.begin(),A.end());
    return A[N-1]-A[0];
}

using namespace std;

int main(){
 ll n;
 cin>>n;
 vector<ll>v;
 for(ll i=0;i<n;i++){
 ll x;
 cin>>x;
 v.push_back(x);
 }
 sort(v.begin(),v.end());
 cout<<v[n-1]-v[0]<<endl;
return 0;
}