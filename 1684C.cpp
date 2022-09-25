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
    ll n,m;
    cin>>n>>m;
    //int flag=1;
    pair<ll,ll>ans={};
    vector<vector<ll>>table;
   for(int i=0;i<n;i++){
    vector<ll>row;
    for(int j=0;j<m;j++){
        ll x;
        cin>>x;
        row.push_back(x);
    


    }
    table.push_back(row);
   }
   int flag=0;
    ll l=0;
    ll r=0;
   for(int i=0;i<n;i++){
    vector<ll>temp=table[i];
    sort(temp.begin(),temp.end());
    ll count=0;
    if(!flag){
    l=0;
    r=0;
    }
   
    for(int j=0;j<m;j++){
        if(temp[j]!=table[i][j]){
            count++;
             if(count==1){
            l=j;
        }
        if(count==2){
            r=j;

        }
        }
       
        if(count>2){
            flag=1;
            break;
        }

    }
    //cout<<l<<r<<i<<endl;
    //cout<<flag<<endl;
    if(flag==1){
        break;
    }
    if(count==2){
        for(int k=0;k<n;k++){
            if(k!=i){
                temp=table[k];
                sort(temp.begin(),temp.end());
                ll temp1=table[k][l];
                table[k][l]=table[k][r];
                table[k][r]=temp1;
            for(int t=0;t<m;t++){
                if(table[k][t]!=temp[t]){
                    flag=1;
                    break;
                }

            }
            }
        }
        if(flag){
        break;
    }
    if(!flag)
    break;
    }
    
   }
   if(flag)
   cout<<-1<<endl;
   else{
    cout<<l+1<<" "<<r+1<<endl;
   }
}
return 0;
}