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
 ll n=0;
 cin>>n;
 ll res=0;
 while(n){
    res+=n;
    n/=2;
 }
 cout<<res<<endl;
}
return 0;

}