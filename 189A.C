#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;



int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
//cin>>t;
int n,a,b,c;
cin>>n>>a>>b>>c;
vector<int>v;
//v.push_back(a);
//v.push_back(b);
//v.push_back(c);
int d=-1;
for(int i=0;i<=4000;i++){
    for(int j=0;j<=4000;j++){
        int e=n-a*i-b*j;
        if(e>=0 && e%c==0){
            d=max(d,i+j+e/c);

        }
    }
}
cout<<d<<endl;


return 0;
}