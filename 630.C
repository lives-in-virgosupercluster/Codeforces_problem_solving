#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;


    int n;
    cin>>n;
    ll sum=0;
    ll pow=1;
    for(int i=1;i<=n;i++){
        pow*=2;
        sum+=pow;
        
    }
    cout<<sum<<endl;

return 0;
}