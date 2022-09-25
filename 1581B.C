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
    long long n,m,k;
    cin>>n>>m>>k;
    if(n==1){
        if(m==0){
            if(k>1){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else if(m>(n*(n-1))/2){
        cout<<"no"<<endl;
    }
    else if(m<n-1){
        cout<<"no"<<endl;
    }
    else{
        if(m==(n*(n-1))/2 ){
            if(k>2){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(k>3){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        
        }
    }
}
return 0;
}