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
    ll n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    ll sum1=0;
    ll sum2=0;
    for(ll i=0;i<a.length();i++){
        sum1+=a[i]-'a';
        sum2+=b[i]-'a';
    }
    if(sum1>sum2){
        cout<<"no"<<endl;
    }
    else{
        map<ll,ll>ma;
        map<ll,ll>mb;
       // vector<ll>count(26,0);
        for(ll i=0;i<a.length();i++){
            ma[a[i]-'a']++;
            mb[b[i]-'a']++;
         //   count[a[i]-'a']++;
        }
        ll flag=0;
        for(ll i=0;i<26;i++){
            if(mb[i]<=ma[i]){
                ma[i]-=mb[i];
                if(ma[i]%k!=0){
                    flag=1;
                    break;
                }
                ma[i+1]+=ma[i];
            }
            else{
                flag=1;
                break;
            }

            
        }
        if(flag){
            cout<<"no"<<endl;
        }
       else
       cout<<"yes"<<endl;
    }

}
return 0;
}