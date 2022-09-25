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
    int a=0;
    int arr[n][m];
   arr[0][0]=1;
   for (ll i = 0; i < n; i++)
   {
    
    
    
    for (ll j = 0; j < m; j++)
    {
        if(j>1){
            if(arr[i][j-1]+arr[i][j-2]==0){
                arr[i][j]=1;
                cout<<arr[i][j]<<" ";
            }
            else if(arr[i][j-1]+arr[i][j-2]==2){
                arr[i][j]=0;
                cout<<arr[i][j]<<" ";
            }
            else{
                if(arr[i][j-1]==1){
                    cout<<1<<" ";
                    arr[i][j]=1;
                }
                else{
                    cout<<0<<" ";
                    arr[i][j]=0;
                }
            }
        }
        else{
            if(j==1){
             if(arr[i][j-1]==1){
                    cout<<0<<" ";
                    arr[i][j]=0;
                }
                else{
                    cout<<1<<" ";
                    arr[i][j]=1;
                }
            }
            else{
                if(i>1){
                    if(arr[i-1][j]+arr[i-2][j]==2){
                        arr[i][j]=0;
                        cout<<0<<" ";
                    }
                    else if(arr[i-1][j]+arr[i-2][j]==0){
                        arr[i][j]=1;
                        cout<<1<<" ";
                    }
                    else{
                        if(arr[i-1][j]==1){
                            cout<<1<<" ";
                            arr[i][j]=1;
                        }
                        else{
                            cout<<0<<" ";
                            arr[i][j]=0;
                        }
                    }
                }
                else{
                    if(i==0){
                        arr[i][j]=1;
                        cout<<arr[i][j]<<" ";
                    }
                    else{
                        arr[i][j]=0;
                        cout<<arr[i][j]<<" ";
                    }
                }
            }
        }
        
    }
    cout<<endl;
    
   }
   
}
return 0;
}