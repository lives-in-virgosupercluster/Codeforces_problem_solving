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
    string s;
    cin>>s;
    vector<ll>count;
    for(ll i=0;i<n;i++){
        if(s[i]=='*')
        count.push_back(i+1);

    }
    if(count.size()==0 || count.size()==1){
        cout<<0<<endl;
    }
    else{
    if(count.size()%2==0){
        ll x=(count.size()+1)/2;
      ll j=x-1;
        ll index=count[x]-1;
        ll sum=0;
        while(j >=0 ){
            sum+=abs(index-count[j]);
            j--;
            index--;
        }
        j=x+1;
        index=count[x]+1;

        while(j!=count.size()){
            sum+=abs(index-count[j]);
            index++;
            j++;

        }
        cout<<sum<<endl;


    }
    else{
        ll x=(count.size())/2;
        ll j=x-1;
        ll index=count[x]-1;
        ll sum=0;
        while(j >=0 ){
            sum+=abs(index-count[j]);
            j--;
            index--;
        }
        j=x+1;
        index=count[x]+1;

        while(j!=count.size()){
            sum+=abs(index-count[j]);
            index++;
            j++;

        }
        cout<<sum<<endl;

    }
    }
}
return 0;
}