#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;

ll n,m;
cin>>n>>m;
int a[n][m];
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int b[n][m];
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>b[i][j];
    }
}
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        ll temp=a[i][j];
        ll temp1=b[i][j];
        a[i][j]=min(temp,temp1);
        b[i][j]=max(temp,temp1);
    }
}
int flag=0;
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        if(j!=0){
            if(a[i][j]<=a[i][j-1]){
                flag=1;
                break;
            }
        }
        for(ll k=0;k<n;k++){
            if(k!=0){
                if(a[k-1][j]>=a[k][j]){
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag)
    break;
   
    
}
if(!flag){
    for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        if(j!=0){
            if(b[i][j]<=b[i][j-1]){
                flag=1;
                break;
            }
        }
        for(ll k=0;k<n;k++){
            if(k!=0){
                if(b[k-1][j]>=b[k][j]){
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag)
    break;
   
    
}

}
if(flag){
    cout<<"Impossible"<<endl;
}
else{
    cout<<"Possible"<<endl;
}




return 0;
}