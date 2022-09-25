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
    ll n;
    cin>>n;
    ll count=0;
    int k=32;
    vector<ll>max1(k+1,0);
    int flag=0;
    //int x=2>>1;
    //cout<<x<<endl;
    vector<ll>a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int max=1;
        int count=1;
        while(a[i]!=0){

            //a[i]=a[i]>>1;
            if(a[i]==1){
                max=count;
                 a[i]=a[i]>>1;
            }
            else{
                a[i]=a[i]>>1;
            }

            count++;
           
        }
        max1[max]++;

    }
    ll sum=0;
    for(int i=1;i<=k;i++){
        sum+=(max1[i]*(max1[i]-1))/2;


    }
    cout<<sum<<endl;
}

   
return 0;
}