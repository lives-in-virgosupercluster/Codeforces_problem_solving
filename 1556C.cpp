#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<ll>v(n,0);
for (ll i = 0; i < n; i++)
{
    cin>>v[i];
}
ll sum1=0;
ll sum2=0;
ll ans=0;

for (ll i = 0; i < n; i++)
{
    if(i%2==0){
        ll sum1=v[i];
        ll sum2=0;
        for (ll j = i+1; j < n; j++)
        {
            if(j%2==0){
                sum1+=v[j];

            }
            else{
                sum2+=v[j];
                
                    ans++;
                
            }
        }
        
    }
}
cout<<ans<<endl;




return 0;
}