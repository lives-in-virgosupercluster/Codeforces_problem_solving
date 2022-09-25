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
    ll n,x;
    cin>>n;
    cin>>x;
    vector<ll>v;
    map<ll,ll>s;
    ll ab;
    for(ll i=1;i<=n;i++){
        cin>>ab;
        v.push_back(ab);
        if(s.find(ab)==s.end()){
            s[ab]=1;
            
        }
        else{
            s[ab]++;
        }
    }
    sort(v.begin(),v.end());
    
    ll num=0;
    for(ll i=0;i<n;i++){
        if(s[v[i]]!=0){
            if(s.find(v[i]*x)!=s.end()){
                if(s[v[i]*x]!=0){
                    s[v[i]*x]--;
                    s[v[i]]--;
                }
                else{
                    num++;
                    s[v[i]]--;
                }
            }
            else{
                num++;
                s[v[i]]--;
            }
        }

        

        }
        cout<<num<<endl;
    }

    


return 0;
}

