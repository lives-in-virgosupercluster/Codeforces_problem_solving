#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>v(n);
    if(n>=2*k-1){
        int a=1,b=1;
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i ==a && j==b && count<k){
                    cout<<"R"<<"";
                    count++;
                    a+=2;
                    b+=2;

                }
                else{
                    cout<<"."<<"";
                }
                
            }
            cout<<"\n";
        }
    }
    else{
        cout<<-1<<"\n";

    }
    

    }
    return 0;

}
