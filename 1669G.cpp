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
    int n,m;
    cin>>n>>m;
    vector<string>a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    for(int i=0;i<m;i++){
        int last=n-1;
        for(int j=n-1;j>=0;j--){
            if(j==n-1){
                if(a[j][i]!='.'){
                    last--;
                }
            }
            else {
                if(a[j][i]=='*'){
                    if(last>j){
                    a[last][i]='*';
                    last--;
                    a[j][i]='.';
                    }
                    else{
                        last--;
                    }

                }
                else if(a[j][i]=='o'){
                    last=j-1;

            
                }
            }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j<m-1){
            cout<<a[i][j]<<"";
            }
            else{
                cout<<a[i][j]<<endl;
            }
        }
    }
    // cout<<endl;
    // cout<<endl;
    //  cout<<endl;

}
return 0;
}