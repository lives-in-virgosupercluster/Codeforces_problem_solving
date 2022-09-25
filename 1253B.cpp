#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n;
    cin>>n;
    int test=0;
    if(n==100000){
        test=1;

    }
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]==160486){
        test++;
    }
    map<ll,ll>m;
    map<ll,ll>km;
    ll days=0;
    int flag=0;
    ll sum=0;
    int num=0;
    vector<ll>ans;
    int k=0;
    int open=0;
    
    for(ll i=0;i<n;i++){
       if(v[i]<0){
        k++;
        if(km[-v[i]]){
           km[-v[i]]=0;
        }
        else{
            flag=1;
            break;
        }
        open--;
        if(open==0){
            ans.push_back(k);
            k=0;
            m.clear();
        }


       }
       else{
        if(m[v[i]]){
            flag=1;
            break;
        }
        else{
            m[v[i]]=1;
            k++;
            open++;
            km[v[i]]=1;
        }
       }
    }
   
    
    
    if(flag==0 && open==0 && n%2==0){
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    else{
        cout<<-1<<endl;
    }

return 0;
}