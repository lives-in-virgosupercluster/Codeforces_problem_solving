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
    int  n,m,k;
    vector<char>a;
    vector<char>b;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        char x;
        cin>>x;
        b.push_back(x);
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int counta=0;
    int countb=0;
    int i=0;
    int j=0;
    string c="";
    while(i!=n && j!=m){
        if(countb==k){
            c+=a[i];
            i++;
            countb=0;
            counta++;
        }
        while(a[i]<b[j] && i<n && counta<k){
             c+=a[i];
            i++;
            counta++;
            countb=0;
        }
        if(i==n)
        break;
        if(counta==k){
            c+=b[j];
            j++;
            countb++;
            counta=0;
        }
        while(a[i]>b[j] && j<m && countb<k){
             c+=b[j];
            j++;
            countb++;
            counta=0;
        }
        if(j==m)
        break;
        //cout<<c<<endl;

    }
    
   //string c="";
   
   cout<<c<<endl;

}
return 0;
}