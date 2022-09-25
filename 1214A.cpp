#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;


int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,d,e;
cin>>n>>d>>e;
ll mn=INTMAX_MAX;
for(int i=0;i<=n/d;i++){
    mn=min((n-i*d)%(5*e),mn);

}
cout<<mn<<endl;
return 0;
}