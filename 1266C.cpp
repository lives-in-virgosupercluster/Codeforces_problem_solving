#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll r,c;
    cin>>r>>c;
    ll arr[r+1][c+1];
    ll temp=2;
    if(r==1 && c==1){
        cout<<0<<endl;
    }
    else{
        if(c!=1)
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                arr[i][j]=i*(r+j);
            }
        }
        else{
            for(int i=1;i<=r;i++){
                arr[i][1]=temp++;
            }
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

return 0;
}