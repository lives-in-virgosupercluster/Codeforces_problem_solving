#include<bits/stdc++.h>

using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){

    int m,n,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    if(rb==rd || cd==cb){
        cout<<0<<"\n";

    }
    else{
    if(rb<rd && cb<cd ){
        cout<<min(rd-rb,cd-cb)<<"\n";
        //cout<<rd-rb<<"\n";

    }
    else if(cb<cd){
        cout<<min((n-rb)+(n-rd),cd-cb)<<"\n";


    }
    else if(rb<rd){
        cout<<min(rd-rb,(m-cb)+(m-cd))<<"\n";

    }
    else{
        int x=(n-rb)+ (n-rd);
        int z=(m-cb)+(m-cd);
        cout<<min(x,z)<<"\n";
    }
    }
    }

}
