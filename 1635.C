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
    vector<ll>v(n+1,0);
    vector<ll>v1;
    vector<ll>v2;
    vector<ll>v3;
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        cin>>v[i];
    }
    if(v[n]<v[n-1]){
        cout<<-1<<endl;
    }
    else{
        if(v[n]>=0){
            for(int i=1;i<n-1;i++){
                v[i]=v[n-1]-v[n];
                //cout<<i<<" "<<n-1<<" "<<n<<endl;
                v1.push_back(i);
                v2.push_back(n-1);
                v3.push_back(n);
            }
            cout<<v1.size()<<endl;
            for(int i=0;i<v1.size();i++){
                cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
            }

        }
        else{
            int flag=0;
            for(int i=1;i<n;i++){
                if(v[i]>v[i+1]){
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            cout<<0<<endl;
        }
    }
    
}
return 0;
}