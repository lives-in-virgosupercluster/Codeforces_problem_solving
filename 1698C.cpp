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
    vector<ll>v;
    map<ll,ll>m;
    ll poscount=0;
    ll negcount=0;
    ll zerocount=0;
    int flag=0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        m[x]++;
        if(x>0){
            poscount++;
            v.push_back(x);
            
        }
        else if(x<0){
            negcount++;
            v.push_back(x);
            
        }
        else{
            zerocount++;
            if(zerocount<=2){
                v.push_back(x);
            }
        }
        if(negcount>2 || poscount>2){
            flag=1;
        }
       
    }
    if(flag){
        cout<<"no"<<endl;
    }
    else{
        ll nsize=v.size();
        for (ll i = 0; i < nsize-2; i++)
        {
            for (ll j = i+1; j < nsize-1; j++)
            {
                for (ll k = j+1; k < nsize; k++)
                {
                    if(m[v[i]+v[j]+v[k]]==0){
                        flag=1;
                        break;
                    }
                }
                if(flag)
                break;
                
            }
            if(flag)
            break;
            
        }
        if(flag)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
        
    }

}
   
return 0;

}