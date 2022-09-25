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
    ll q;
    cin>>q;
    vector<ll>v(n,0);
    ll j=0;
    ll mx=-1;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(mx<v[i]){
            mx=v[i];
            j=i;
        }

    }
    vector<ll>wins(n,0);
    //vector<vector<ll>>v1(n,vector<ll>(n+1,0));
    ll currentindex=0;
    ll temp=v[currentindex];
    ll round=0;
    for(ll i=0;i<n;i++){
          if(temp!=v[i]){
round++;
      }
      if(temp<v[i]){
        //v1[currentindex][round]=v1[currentindex][round-1];
        currentindex=i;
        temp=v[i];
        wins[i]++;
        //v1[currentindex][round]=v1[currentindex][round-1]+1;
      }
      else{
        if(temp!=v[i]){
        wins[currentindex]++;
        //v1[currentindex][round]=v1[currentindex][round-1]+1;
        }
      }
    
      
    }
    //cout<<round<<endl;
    //cout<<v1[0][2]<<endl;
    //cout<<"here--"<<v1[0][0]<<endl;
    //cout<<"harsh"<<endl;
    //cout<<wins[0]<<endl;
    //cout<<wins[3]<<endl;
    for(ll i=0;i<q;i++){
ll index,round;
cin>>index>>round;
if(round>n-1){
    if(v[index-1]==mx){
    if(index==1){
        //cout<<"yes"<<endl;
        cout<<max(round-(index-1),(ll)0)<<endl;
       }
       else{
        cout<<max(round-(index-2),(ll)0)<<endl;
       }
    }
    else{
        if(index==1){
            cout<<max((ll)0,min(round-(index-1),wins[index-1]))<<endl;;
        }
        else{
          cout<<max((ll)0,min(round-(index-2),wins[index-1]))<<endl;;
        }
    }
}

else{
    if(v[index-1]==mx){
        //cout<<round-index/2<<endl;
       if(index==1){
        cout<<max(round-(index-1),(ll)0)<<endl;
       }
       else{
        cout<<max(round-(index-2),(ll)0)<<endl;
       }
    }
    else{
        // if(v1[index-1][round]==0 && wins[index-1]!=0){
        //     // if(round>index){
        //     //     cout<<wins[index-1]<<endl;
        //     // }
        //     cout
        // }
        // else
       cout<<max((ll)0,min((index==1?round-(index-1):round-(index-2)),wins[index-1]))<<endl;;


    }

}
    }
}
return 0;
}