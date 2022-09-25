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
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        cout<<n/2<<" "<<n/2<<" "<<0<<endl;
    }
}
return 0;
}