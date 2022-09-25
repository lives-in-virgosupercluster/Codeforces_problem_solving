#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vans(100000);
        vector<int> vis(100000);
        vector<int> temp(100000);
        for(int i=1;i<=n;i++){
            vans[i]=0;
            vis[i]=0;
            temp[i]=0;
        }
        int index=0;
        int curr=0;
        int last=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                index=i;
                cout<<"?"<<" "<<i<<"\n";
                cout.flush();
                cin>>curr;
                while(vis[curr]==0){
                    vis[curr]=1;
                    last=curr;
                    cout<<"?"<<" "<<i<<"\n";
                     cout.flush();
                     cin>>curr;
                     temp[last]=curr;


                }
                vans[i]=temp[i];


            }
            else{
                vans[i]=temp[i];
            }
        }
        cout<<"! ";
        for(int i=1;i<=n;i++){
            cout<<vans[i]<<" ";

        }
        cout<<endl;
        cout.flush();
        
    }
    return 0;
}

