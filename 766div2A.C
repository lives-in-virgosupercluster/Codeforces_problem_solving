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
int n,m,r,c;
// cout<<"enter your rows and columns\n";
cin>>n>>m>>r>>c;
// cout<<n<<m<<r<<c;
vector<string> matrix(n);
for(int i=0;i<n;i++){
    cin>>matrix[i];
    // cout<<matrix[i];

}
ll min1=10e9;
if(matrix[r-1][c-1]=='B'){
    cout<<0<<endl;
}
else{
    int ca=0;
   // cout<<matrix[1][0];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        if(matrix[i][j]=='B'){
           
            if(i==r-1 || j==c-1){
                min1=1;
                ca=1;
                
                break;
            }
            else{
                min1=2;
            }
           

        }
    }
    if(ca==1){
        break;
    }
}
if(min1==10e9){
    cout<<-1<<endl;
}
else{
    cout<<min1<<endl;
}
}

}
return 0;
}