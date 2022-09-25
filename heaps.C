#include<bits/stdc++.h>
#define ll long long int
ll min1(ll a,ll b){
    if(a>b){
        return b;
    }
    return a;
}

using namespace std;
int main(){
    int t;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll min=10e9;
        int index=0;
        vector<int>v(n+1,0);
        v.push_back(0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(min>v[i]){
                min=v[i];
                index=i;
            }
            
        }
        ll l,r,mid;
        l=v[index];
        
        int c=1;
         r=1e9;
        vector<int>add(n+1,0);
        vector<int>final(n+1,0);
        while(r>l+1){
              vector<int>add(n+1,0);
        vector<int>final(n+1,0);
            c=1;
            mid=(l+r)/2;
            
           
            for(int i=n;i>2;i--){
                if(v[i]+add[i]-mid<0){
                    c=0;
                    break;
                }
                ll d=min1(v[i]/3,((v[i]+add[i]-mid)/3));
                add[i-1]+=d;
                add[i-2]+=2*d;
            final[i]=v[i]-3*d+add[i];
            }
            final[2]=v[2]+add[2];
            final[1]=v[1]+add[1];
            for(int i=1;i<=n;i++){
                if(final[i]<mid){
                    c=0;
                    break;
                }
            }
            if(c==1){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<"\n";
        

    }
    return 0;
}