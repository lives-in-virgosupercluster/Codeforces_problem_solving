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
    map<int,int>m;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        
        cin>>v[i];
        m[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[v[i]]==1){
            flag=1;
            cout<<-1<<endl;
            break;
        }
    }
   if(!flag){
       vector<int>p(n,0);
       for(int i=0;i<n;i++){
           p[i]=i+1;
       }
       int r=0;
       int l=0;
       while(r<n){
           while(r<n-1 && v[r]==v[r+1])
           r++;
           rotate(p.begin()+l,p.begin()+r,p.begin()+r+1);
           l=r+1;
           r++;
       }
       for (int i = 0; i < n; i++)
       {
           cout<<p[i]<<" ";
       }
       cout<<endl;
       

   }

    
}
return 0;
}