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
    ll n,m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<0<<endl;
    }
    else{
    if(n>m)
        cout<<(n-1+m-1)+(m)<<endl;
    else{
        cout<<(n-1+m-1)+(n)<<endl;

    }
    }

    
}
return 0;
}