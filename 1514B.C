#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
//#define num 1e9+7


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
ll num=1e9+7;
while(t--){
    int n,k;
    cin>>n>>k;
    ll a=1;
    for(int i=0;i<k;i++){
        a*=n;
        a=a%num;


    }
    cout<<a<<endl;
}
return 0;
}