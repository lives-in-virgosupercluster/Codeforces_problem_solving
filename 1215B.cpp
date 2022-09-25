#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
ll n;
cin>>n;
vector<ll>v(n+1,0);
for(ll i=1;i<=n;i++){
    cin>>v[i];
}

ll count1=0;
ll count2=0;
ll bal=0;
ll ansp=0;

for(ll i=1;i<=n;i++){
    if(v[i]<0){
        bal++;
    }
    if(bal%2==0){
        count1++;
        ansp+=count1;
    }
    else{
        count2++;
       // if(count2!=1)
        ansp+=count2-1;
    }


}
cout<<((n*(n+1))/2)-ansp<<" "<<ansp<<endl;
return 0;
}
