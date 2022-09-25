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
    vector<int>a(n,0);
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            int temp=b[i];
            b[i]=a[i];
            a[i]=temp;
        }
        
    }
    for(int i=0;i<n;i++){
        if(i!=0){
            sum+=abs(a[i-1]-a[i])+abs(b[i-1]-b[i]);
        }
    }
    cout<<sum<<endl;
}
return 0;
}