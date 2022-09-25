#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n,0);
for(int i=0;i<n;i++){
    cin>>v[i];
}


ll minmoves=LLONG_MAX;
for(int i=0;i<n;i++){
    ll moves=0;
    vector<ll>a(n,0);
    a[i]=0;
    //ll temp=0;
    for(int j=i-1;j>=0;j--){
        if(a[j]<a[j+1]){
            //moves++;
continue;
        }
        float diff=(a[j]-a[j+1]);
        moves+=ceil((diff+1)/v[j]);
        a[j]=-ceil((diff+1)/v[j])*v[j];
    }
    for(int j=i+1;j<n;j++){
        if(a[j-1]<a[j]){
            //moves++;
continue;
        }
        float diff=(a[j-1]-a[j]);
        moves+=ceil((diff+1)/v[j]);
        a[j]=ceil((diff+1)/v[j])*v[j];
        
        
    }
   // cout<<"moves--"<<moves<<endl;
    minmoves=min(minmoves,moves);
}
cout<<minmoves<<endl;

return 0;
}