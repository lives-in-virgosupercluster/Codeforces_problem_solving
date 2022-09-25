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

    vector<int>p(n+1,0);
    map<int,int>m;
    vector<int>ans(n+1,0);
    for (int i = 1; i <=n; i++)
    {
        cin>>p[i];
        m[i]=i;
        
    }
    
    if(n==1){
        cout<<-1<<endl;
    }
    else{
        for (int i=1;i<=n;i++){
            
        }
    }
    
    

    
}
return 0;
}