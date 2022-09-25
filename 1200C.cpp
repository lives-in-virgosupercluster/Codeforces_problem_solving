#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;

    ll n,m,q;
    cin>>n>>m>>q;
    ll arr[3];
    arr[1]=n/__gcd(m,n);
    arr[2]=m/__gcd(m,n);
    for(int i=0;i<q;i++){
        ll sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(((sy+arr[sx]-1)/arr[sx])==((ey+arr[ex]-1)/arr[ex])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}