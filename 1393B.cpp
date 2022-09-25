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
    map<ll,ll>m;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    ll count4=0;
    ll count2=0;

    // for(ll i=0;i<n;i++){
    //     if(m[v[i]]>=4){
            
    //     }
    //     else if(m[v[i]]>=2 && m[v[i]]<4){
    //         count2++;
    //     }

    // }
    for(auto it=m.begin();it!=m.end();it++){
        count4+=(*it).second/4;
        count2+=(*it).second/2;
    }
    ll q;
   //cout<<"4--count"<<count4<<endl;
    //cout<<"2--count"<<count2<<endl;
    cin>>q;
    while(q--){
        ll x;
        char sym;
        cin>>sym>>x;
        count4-=m[x]/4;
        count2-=m[x]/2;
        if(sym=='+'){
            m[x]++;
            

        }
        else {
            m[x]--;
            

            
        }
        count4+=m[x]/4;
        count2+=m[x]/2;
        //cout<<"count4--"<<count4<<endl;
        //cout<<"count2--"<<count2<<endl;
        if(count4>=1 && count2>=4){
            cout<<"yes"<<endl;


        }
        
        else{
            cout<<"no"<<endl;
        }

        
        

        //cout<<"4--count"<<count4<<endl;
    //cout<<"2--count"<<count2<<endl;
    }
    

return 0;
}