#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll x;
    cin>>x;
ll z=ceil(sqrt(x));
ll mn=INT64_MAX;
ll p=0;
ll q=0;
for(ll i=1;i<=z;i++){
    if(x%i==0 && __gcd(i,x/i)==1){
        if(mn>max(i,x/i)){
            p=i;
            q=x/i;
            mn=max(i,x/i);
        }
    }
}
cout<<p<<" "<<q<<endl;
   

return 0;
}