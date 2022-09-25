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
    for(int i=1;i<=n;i++){
        for(ll j=1;j<=i;j++){
           if(j==1 || j==i){
            cout<<1<<" ";
           }
           else{
            cout<<0<<" ";
           }

        }
        cout<<endl;
    }

}
return 0;
}