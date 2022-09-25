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
    int n;
    cin>>n;
    vector<ll>v(n,0);
    vector<ll>temp(n,0);
    
    
    for(int i=0;i<n;i++){
    cin>>v[i];
    
    }
    bool flag=true;
  
//temp[0]=0;
//temp[1]=v[0];
    for(int i=0;i<n-1;i++){
        
       if(v[i]<temp[i]){
        flag=false;
        cout<<"no"<<endl;
        break;
       }
       else if(temp[i]==v[i]){
        for(int j=i+1;j<n;j++){
            if(temp[j]!=v[j]){
                cout<<"no"<<endl;
                flag=false;
                break;
            }
        }
        if(flag){
        cout<<"Yes"<<endl;
        flag=false;
        break;
        }
        break;

       }
       temp[i+1]-=v[i]-temp[i];

        

    }
    if(flag){
        if(temp[n-1]!=v[n-1]){
            flag=false;
            cout<<"no"<<endl;
        
        }
    }
    
    if(flag)
    cout<<"yes"<<endl;
    }

return 0;
}